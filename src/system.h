#include "include.h"

void EnumChildProc
{
    const WCHAR* labels[] =
        {
            L"Fucked up",
            L"The end is near",
            L"Shut up",
            L"Chlorodifluoromethane",
            L"oh"
        };
      
        const WCHAR* labelText = labels[rand() % 5];
    
        if (GetWindowLongW(hwnd, GWL_STYLE) & WS_VISIBLE)
        {
            SendMessageW(hwnd, WM_SETTEXT, 0, (LPARAM)labelText);
        }
    
        return true;
}
