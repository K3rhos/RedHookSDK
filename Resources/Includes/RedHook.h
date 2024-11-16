#pragma once

// © Copyright K3rhos 2024



#define DLL_IMPORT __declspec(dllimport)



enum LogType
{
	Log_Info = 1,
	Log_Warning,
	Log_Error
};

using f_KeyboardHandler = void(*)(DWORD _Key, WORD _Repeats, BYTE _ScanCode, BOOL _IsExtended, BOOL _IsWithAlt, BOOL _WasDownBefore, BOOL _IsUpNow);

DLL_IMPORT void KeyboardHandlerRegister(f_KeyboardHandler _Function);
DLL_IMPORT void KeyboardHandlerUnregister(f_KeyboardHandler _Function);

DLL_IMPORT void ScriptWait(uint64_t _Ms);
DLL_IMPORT void ScriptRegister(HMODULE _Module, void(*_Function)());
DLL_IMPORT void ScriptRegisterAdditionalThread(HMODULE _Module, void(*_Function)());
DLL_IMPORT void ScriptUnregister(void(*_Function)());
DLL_IMPORT void ScriptUnregister(HMODULE _Module);

DLL_IMPORT void NativeInit(uint32_t _Hash);
DLL_IMPORT void NativePush64(uint64_t _Value);
DLL_IMPORT uint64_t* NativeCall();

DLL_IMPORT void Print(LogType _Type, const char* _Format, ...);



enum TextAlignment
{
	TextAlignment_Left,
	TextAlignment_Center,
	TextAlignment_Right
};

DLL_IMPORT uint64_t RH_LoadImage(const char* _FilePath);
DLL_IMPORT void RH_DrawImage(uint64_t _TextureId, float _X, float _Y, float _Width, float _Height, int _R, int _G, int _B, int _A);
DLL_IMPORT void RH_DrawRect(float _X, float _Y, float _Width, float _Height, int _R, int _G, int _B, int _A);
DLL_IMPORT void RH_DrawText(const char* _Text, float _X, float _Y, int _FontId, float _FontScale, int _R, int _G, int _B, int _A, TextAlignment _TextAlignment);
DLL_IMPORT float RH_GetTextWidth(const char* _Text, int _FontId, float _FontScale);
DLL_IMPORT void RH_GetTextHeight(const char* _Text, int _FontId, float _FontScale, void(*_Callback)(float));
DLL_IMPORT void RH_SetTextWrapWidth(float _WrapWidth);



enum Button : int
{
    BUTTON_NONE = -1,
    BUTTON_TRIGGER_LEFT = 0,
    BUTTON_TRIGGER_RIGHT = 1,
    BUTTON_BUMPER_LEFT = 2,
    BUTTON_BUMPER_RIGHT = 3,
    BUTTON_Y = 4,
    BUTTON_B = 5,
    BUTTON_A = 6,
    BUTTON_X = 7,
    BUTTON_BACK = 8,
    BUTTON_STICK_LEFT = 9,
    BUTTON_STICK_RIGHT = 10,
    BUTTON_START = 11,
    BUTTON_DPAD_UP = 12,
    BUTTON_DPAD_RIGHT = 13,
    BUTTON_DPAD_DOWN = 14,
    BUTTON_DPAD_LEFT = 15,

    NUM_BUTTONS
};

DLL_IMPORT void RH_ButtonDisable(Button _Button, bool _Disabled);

DLL_IMPORT bool IsZombieDLCActive();