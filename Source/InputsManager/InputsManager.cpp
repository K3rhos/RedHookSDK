#include <pch.h>



/*
This class is the "old" keyboard inputs handler method, used before RedHook v0.8, this should be removed in the future
bcs keyboard inputs are now properly handled using custom natives (see Natives.h) that use the internal RDR keyboard handler system.
*/



void InputsManager::Register()
{
	KeyboardHandlerRegister(KeyboardHandler);
}



void InputsManager::Unregister()
{
	KeyboardHandlerUnregister(KeyboardHandler);
}



KeyState InputsManager::GetKeyState(BYTE _ScanCode)
{
	return s_KeyStates[_ScanCode];
}



void InputsManager::ResetKeyState(BYTE _ScanCode)
{
	memset(&s_KeyStates[_ScanCode], 0, sizeof(s_KeyStates[0]));
}



void InputsManager::KeyboardHandler(DWORD _Key, WORD _Repeats, BYTE _ScanCode, BOOL _IsExtended, BOOL _IsWithAlt, BOOL _WasDownBefore, BOOL _IsUpNow)
{
	if (_ScanCode >= 0xFF)
		return;

	s_KeyStates[_ScanCode].Time = GetTickCount64();
	s_KeyStates[_ScanCode].IsWithAlt = _IsWithAlt;
	s_KeyStates[_ScanCode].WasDownBefore = _WasDownBefore;
	s_KeyStates[_ScanCode].IsUpNow = _IsUpNow;
}



// Deprecated: Use native REDHOOK::IS_KEY_DOWN instead
bool Input::IsKeyPressed(KeyCode _KeyCode)
{
	KeyState keyState = InputsManager::GetKeyState(_KeyCode);

	return keyState.Time > 0 && !keyState.IsUpNow;
}



// Deprecated: Use native REDHOOK::IS_KEY_RELEASED instead
bool Input::IsKeyReleased(KeyCode _KeyCode)
{
	KeyState keyState = InputsManager::GetKeyState(_KeyCode);

	return keyState.Time > 0 && keyState.IsUpNow;
}



// Deprecated: Use native REDHOOK::IS_KEY_PRESSED instead
bool Input::IsKeyJustPressed(KeyCode _KeyCode)
{
	KeyState keyState = InputsManager::GetKeyState(_KeyCode);

	bool isPressed = keyState.Time > 0 && !keyState.WasDownBefore && !keyState.IsUpNow;

	if (isPressed)
	{
		InputsManager::ResetKeyState(_KeyCode);

		return true;
	}

	return false;
}



// Deprecated: Use native REDHOOK::IS_KEY_RELEASED instead
bool Input::IsKeyJustReleased(KeyCode _KeyCode)
{
	KeyState keyState = InputsManager::GetKeyState(_KeyCode);

	bool isReleased = keyState.Time > 0 && keyState.WasDownBefore && keyState.IsUpNow;

	if (isReleased)
	{
		InputsManager::ResetKeyState(_KeyCode);

		return true;
	}

	return false;
}