#include "pch.h"



BOOL APIENTRY DllMain(HMODULE _Module, DWORD _ReasonForCall, LPVOID _Reserved)
{
    switch (_ReasonForCall)
    {
        case DLL_PROCESS_ATTACH:
        {
            Application::Initialize(_Module);
        }
        break;
        case DLL_PROCESS_DETACH:
        {
            Application::Shutdown(_Module);
        }
        break;
    }

    return TRUE;
}