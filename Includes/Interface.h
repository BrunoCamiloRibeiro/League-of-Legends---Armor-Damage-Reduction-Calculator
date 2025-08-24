#ifndef INTERFACE_H
#define INTERFACE_H

#include <windows.h>

void Fonts();
void deleteFonts();


void Form(HWND hwnd);

void command(WPARAM wParam);

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam);

#endif
