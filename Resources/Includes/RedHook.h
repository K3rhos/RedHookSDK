#pragma once

// © Copyright K3rhos 2024



#define DLL_IMPORT __declspec(dllimport)



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