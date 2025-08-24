#include <windows.h>
#include "Globals.h"
#include <stdio.h>

void Fonts(){
    h1 = CreateFont(
        32, 0, 0, 0, FW_BOLD,
        FALSE, FALSE, FALSE,
        ANSI_CHARSET, OUT_DEFAULT_PRECIS,
        CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY,
        DEFAULT_PITCH | FF_DONTCARE, "Beaufort for LOL"
    );

    h2 = CreateFont(
        25, 0, 0, 0, FW_BOLD,
        FALSE, FALSE, FALSE,
        ANSI_CHARSET, OUT_DEFAULT_PRECIS,
        CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY,
        DEFAULT_PITCH | FF_DONTCARE, "Beaufort for LOL"
    );


    h3 = CreateFont(
        30, 0, 0, 0, FW_BOLD,
        FALSE, FALSE, FALSE,
        ANSI_CHARSET, OUT_DEFAULT_PRECIS,
        CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY,
        DEFAULT_PITCH | FF_DONTCARE, "Beaufort for LOL"
    );

    h4 = CreateFont(
        25, 0, 0, 0, FW_BOLD,
        FALSE, FALSE, FALSE,
        ANSI_CHARSET, OUT_DEFAULT_PRECIS,
        CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY,
        DEFAULT_PITCH | FF_DONTCARE, "Beaufort for LOL"
    );

    h5 = CreateFont(
        17, 0, 0, 0, FW_BOLD,
        FALSE, FALSE, FALSE,
        ANSI_CHARSET, OUT_DEFAULT_PRECIS,
        CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY,
        DEFAULT_PITCH | FF_DONTCARE, "Beaufort for LOL"
    );

}

void deleteFonts()
{
    if(h1) DeleteObject(h1);
    if(h2) DeleteObject(h2);
    if(h3) DeleteObject(h3);
    if(h4) DeleteObject(h4);
    if(h5) DeleteObject(h5);
}