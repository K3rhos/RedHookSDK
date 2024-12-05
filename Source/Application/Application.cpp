#include <pch.h>



void Application::Initialize(HMODULE _Module)
{
	InputsManager::Register();

	ScriptRegister(_Module, []
	{
		HUD::PRINT_HELP_B("<red>No Clip Controls\n</red>[F4] On/Off\n[WASD] Move\n[Ctrl] Go Down\n[Space] Go Up\n[Q] Speed-\n[E] Speed+\n[Shift] Speed Boost", 15.0f, true, 1, 0, 0, 0, 0);

		while (true)
		{
			NoClip::Update();

			ScriptWait(0);
		}
	});
}



void Application::Shutdown(HMODULE _Module)
{
	ScriptUnregister(_Module);

	InputsManager::Unregister();
}