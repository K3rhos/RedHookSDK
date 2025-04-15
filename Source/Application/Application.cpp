#include <pch.h>



static bool isPlayerSleeping = false;



static bool RequestGringo(const char* _Path)
{
	OBJECT::REQUEST_ASSET(_Path, ASSET_TYPE_Gringo);

	int assetId = OBJECT::GET_ASSET_ID(_Path, ASSET_TYPE_Gringo);

	STREAM::STREAMING_REQUEST_PROP(assetId, true);

	uint64_t now = GetTickCount64();

	while (!STREAM::STREAMING_IS_GRINGO_LOADED(assetId) && GetTickCount64() < now + 1000)
	{
		ScriptWait(0);
	}

	return STREAM::STREAMING_IS_GRINGO_LOADED(assetId);
}



static void PlaySleepAnimation()
{
	Actor localPlayerActor = ACTOR::GET_PLAYER_ACTOR(-1);

	// If we're already in a sleeping animation...
	if (isPlayerSleeping)
	{
		// Disable and remove the gringo
		int gringo = OBJECT::GET_GRINGO_FROM_OBJECT(localPlayerActor);

		GRINGO::GRINGO_DEACTIVATE(gringo);
		AI_MISC::AI_QUICK_EXIT_GRINGO(gringo, true);
		OBJECT::DESTROY_OBJECT(gringo);

		// Clear current animation
		TASKS::TASK_CLEAR(localPlayerActor);
		ENTITY::ACTOR_RESET_ANIMS(localPlayerActor, 1);

		isPlayerSleeping = false;

		return;
	}

	// Request the animation (by path, looking into game files using MagicRDR would be great to know about all the available animations)
	bool success = RequestGringo("$/content/scripting/gringo/simplegringo/sleeping");

	if (success)
	{
		// Position and rotation
		Vector3 position = ACTOR::GET_POSITION(localPlayerActor);
		Vector3 rotation = Vector3();

		// Just retrieve the player layout
		Layout playerLayout = OBJECT::FIND_NAMED_LAYOUT("PlayerLayout");

		// Create a gringo with the animation set to "sleeping"
		int gringo = OBJECT::CREATE_GRINGO_IN_LAYOUT(playerLayout, "sleeping", "$/content/scripting/gringo/simplegringo/sleeping", PACK_VECTOR3(position), PACK_VECTOR3(rotation));

		// Add this decor flag if we don't want the annoying "gringo camera" to start playing
		DECORATOR::DECOR_SET_BOOL(localPlayerActor, "NoGringoCamera", true);

		// This prevent from the animation to quit after some times
		DECORATOR::DECOR_SET_BOOL(localPlayerActor, "GringoNoQuit", true);

		// Start the animation
		TASKS::TASK_USE_GRINGO(localPlayerActor, gringo, "UseCase1", 1, 1);

		isPlayerSleeping = true;
	}
}



void Application::Initialize(HMODULE _Module)
{
	// This is no longer needed since RedHook v0.8 (If you still want to use it, uncomment this line)
	// InputsManager::Register();

	ScriptRegister(_Module, []
	{
		HUD::PRINT_HELP_B("<red>No Clip Controls\n</red>[F4] On/Off\n[WASD] Move\n[Ctrl] Go Down\n[Space] Go Up\n[Q] Speed-\n[E] Speed+\n[Shift] Speed Boost", 15.0f, true, 1, 0, 0, 0, 0);

		while (true)
		{
			NoClip::Update();

			if (REDHOOK::IS_KEY_PRESSED(KEY_F6))
			{
				PlaySleepAnimation();
			}

			ScriptWait(0);
		}
	});
}



void Application::Shutdown(HMODULE _Module)
{
	ScriptUnregister(_Module);

	// This is no longer needed since RedHook v0.8 (If you still want to use it, uncomment this line)
	// InputsManager::Unregister();
}