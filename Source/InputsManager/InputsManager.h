#pragma once



struct KeyState
{
	uint64_t Time;
	bool IsWithAlt;
	bool WasDownBefore;
	bool IsUpNow;
};



class InputsManager
{
	public:
		static void Register();
		static void Unregister();

		static KeyState GetKeyState(BYTE _ScanCode);
		static void ResetKeyState(BYTE _ScanCode);

	private:
		static inline KeyState s_KeyStates[0xFF];

		static void KeyboardHandler(DWORD _Key, WORD _Repeats, BYTE _ScanCode, BOOL _IsExtended, BOOL _IsWithAlt, BOOL _WasDownBefore, BOOL _IsUpNow);
};



class Input
{
	public:
		static bool IsKeyPressed(KeyCode _KeyCode);
		static bool IsKeyReleased(KeyCode _KeyCode);

		static bool IsKeyJustPressed(KeyCode _KeyCode);
		static bool IsKeyJustReleased(KeyCode _KeyCode);
};