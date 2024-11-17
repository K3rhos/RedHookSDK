#include <pch.h>



void Application::Initialize(HMODULE _Module)
{
	InputsManager::Register();

	ScriptRegister(_Module, []
	{
		UNSORTED::PRINT_HELP_B("<blue>No Clip Controls\n<purple>[F5] On/Off\n[WASD] Move\n[Ctrl] Go Down\n[Space] Go Up\n[A] Speed-\n[E] Speed+\n[Shift] Speed Boost", 15.0f, true, 1, 0, 0, 0, 0);

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