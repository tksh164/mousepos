#pragma comment(lib, "user32.lib")

#ifndef _UNICODE
#define _UNICODE
#endif
#ifndef UNICODE
#define UNICODE
#endif

#include <windows.h>
#include <wchar.h>

int wmain(int argc, wchar_t *argv[])
{
    POINT pos;

    while (TRUE)
    {
        if (!GetCursorPos(&pos))
        {
            wprintf(L"Failed GetCursorPos()\n");
        }

        wprintf(L"x:%d, y:%d\n", pos.x, pos.y);
        Sleep(500);
    }

    return 0;
}
