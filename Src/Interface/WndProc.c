#include "Globals.h"
#include "Interface.h"
#include <windows.h>
#include <stdio.h>
#include <string.h>

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam) {
    switch (msg) {
    case WM_CREATE: {
        Form(hwnd);
        break;
    }

    case WM_COMMAND:
        command(wparam);
        break;

    case WM_DESTROY:
        deleteFonts();
        PostQuitMessage(0);
        break;
    }
    return DefWindowProc(hwnd, msg, wparam, lparam);
}
