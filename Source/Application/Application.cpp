#include <pch.h>



void Application::Initialize(HMODULE _Module)
{
	InputsManager::Register();

	ScriptRegister(_Module, []
	{
		_PRINT_HELP("<blue>No Clip Controls\n<purple>[F5] On/Off\n[WASD] Move\n[Ctrl] Go Down\n[Space] Go Up\n[A] Speed-\n[E] Speed+\n[Shift] Speed Boost", 15.0f, true, 1, 0, 0, 0, 0);

		while (true)
		{
			NoClip::Update();

			/* EXPERIMENTAL
			if (Input::IsKeyJustPressed(KEY_F4))
			{
				Actor localPlayerActor = GET_PLAYER_ACTOR(-1);

				Vector3 position = GET_POSITION(localPlayerActor);
				Vector3 rotation = Vector3();

				ActorModel model = ACTOR_RIDEABLE_ANIMAL_Cow;

				STREAMING_REQUEST_ACTOR(model, true, false);

				while (!STREAMING_IS_ACTOR_LOADED(model, -1))
				{
					WAIT(0);
				}

				Layout layout = FIND_NAMED_LAYOUT("PlayerLayout");

				Actor spawnedVehicle = CREATE_ACTOR_IN_LAYOUT(layout, "", model, &position, &rotation);

				if (spawnedVehicle)
				{
					// RELEASE_ACTOR(spawnedVehicle);
				}
			}
			*/

			WAIT(0);
		}
	});
}



void Application::Shutdown(HMODULE _Module)
{
	ScriptUnregister(_Module);

	InputsManager::Unregister();
}