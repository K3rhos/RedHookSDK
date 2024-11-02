#include <pch.h>



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



bool Input::IsKeyPressed(KeyCode _KeyCode)
{
	KeyState keyState = InputsManager::GetKeyState(_KeyCode);

	return keyState.Time > 0 && !keyState.IsUpNow;
}



bool Input::IsKeyReleased(KeyCode _KeyCode)
{
	KeyState keyState = InputsManager::GetKeyState(_KeyCode);

	return keyState.Time > 0 && keyState.IsUpNow;
}



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