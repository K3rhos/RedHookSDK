#include <pch.h>



static void PlaySleepAnimation()
{
	Actor localPlayerActor = ACTOR::GET_PLAYER_ACTOR(-1);

	Vector3 position = ACTOR::GET_POSITION(localPlayerActor);
	Vector3 rotation = Vector3(0.0f, 0.0f, 0.0f);

	Layout playerLayout = OBJECT::FIND_NAMED_LAYOUT("PlayerLayout");

	OBJECT::CREATE_GRINGO_IN_LAYOUT(playerLayout, "sleeping", "$/content/scripting/gringo/simplegringo/sleeping", PACK_VECTOR3(position), PACK_VECTOR3(rotation));
}



void Application::Initialize(HMODULE _Module)
{
	InputsManager::Register();

	ScriptRegister(_Module, []
	{
		HUD::PRINT_HELP_B("<red>No Clip Controls\n</red>[F4] On/Off\n[WASD] Move\n[Ctrl] Go Down\n[Space] Go Up\n[Q] Speed-\n[E] Speed+\n[Shift] Speed Boost", 15.0f, true, 1, 0, 0, 0, 0);

		while (true)
		{
			NoClip::Update();

			if (Input::IsKeyJustPressed(KEY_F6))
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

	InputsManager::Unregister();
}