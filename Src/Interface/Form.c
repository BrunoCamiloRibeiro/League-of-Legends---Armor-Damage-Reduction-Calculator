#include <windows.h>
#include "Globals.h"
#include "Interface.h"
#include "Define_id.h"
#include "Functions.h"
#include <stdio.h>

void Form(HWND hwnd)
{
    Fonts();
    HMENU hMenu = GetSystemMenu(hwnd, FALSE);
    if (hMenu) {
        DeleteMenu(hMenu, SC_MAXIMIZE, MF_BYCOMMAND);
        DeleteMenu(hMenu, SC_SIZE, MF_BYCOMMAND);
    }


    Title = CreateWindow(
        "STATIC",                       //TIPO
        "ARMOR REDUCTION CALCULATOR",   //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        0,                              //X
        0,                              //Y
        tW,                             //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(Title, WM_SETFONT, (WPARAM)h1, TRUE);

    damageTitle = CreateWindow(
        "STATIC",                       //TIPO
        "DANOS",                        //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        0,                              //X
        40,                             //Y
        tW / 2,                         //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(damageTitle, WM_SETFONT, (WPARAM)h2, TRUE);

    armorTitle = CreateWindow(
        "STATIC",                       //TIPO
        "ARMADURAS",                    //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        tW / 2,                         //X
        40,                             //Y
        tW / 2,                         //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(armorTitle, WM_SETFONT, (WPARAM)h2, TRUE);

    //------------------ FIM CABEÇALHO --------------------------------


    labelPhisical = CreateWindow(
        "STATIC",                       //TIPO
        "Fisico",                       //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        0,                              //X
        80,                             //Y
        tW / 6,                         //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );

    inputPhisical = CreateWindow(
        "EDIT",                         //TIPO
        "",                             //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        WS_BORDER| SS_CENTER,           //ESTILOS
        tW / 6,                         //X
        80,                             //Y
        (tW / 2) - (tW / 6),            //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        (HMENU)ID_PD,                   //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(inputPhisical, WM_SETFONT, (WPARAM)h3, TRUE);

    // MAGICO

    labelMagic = CreateWindow(
        "STATIC",                       //TIPO
        "Magico",                       //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        0,                              //X
        120,                            //Y
        tW / 6,                         //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );

    inputMagic = CreateWindow(
        "EDIT",                         //TIPO
        "",                             //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        WS_BORDER| SS_CENTER,           //ESTILOS
        tW / 6,                         //X
        120,                            //Y
        (tW / 2) - (tW / 6),            //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        (HMENU)ID_MD,                   //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(inputMagic, WM_SETFONT, (WPARAM)h3, TRUE);

    // VERDADEIRO

    labelTrue = CreateWindow(
        "STATIC",                       //TIPO
        "Verdadeiro",                       //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        0,                              //X
        160,                            //Y
        tW / 6,                         //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );

    inputTrue = CreateWindow(
        "EDIT",                         //TIPO
        "",                             //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        WS_BORDER| SS_CENTER,           //ESTILOS
        tW / 6,                         //X
        160,                            //Y
        (tW / 2) - (tW / 6),            //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        (HMENU)ID_TD,                   //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(inputTrue, WM_SETFONT, (WPARAM)h3, TRUE);

    // Armaduras

    labelArmor = CreateWindow(
        "STATIC",                       //TIPO
        "Armor",                        //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        tW / 2,                         //X
        80,                             //Y
        tW / 6,                         //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );

    inputArmor = CreateWindow(
        "EDIT",                         //TIPO
        "",                             //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        WS_BORDER| SS_CENTER,           //ESTILOS
        (tW / 2) + (tW / 6),            //X
        80,                             //Y
        (tW / 2) - (tW / 6),            //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        (HMENU)ID_AR,                   //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(inputArmor, WM_SETFONT, (WPARAM)h3, TRUE);

    // MAGICO

    labelMr = CreateWindow(
        "STATIC",                       //TIPO
        "MR",                           //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        tW / 2,                         //X
        120,                            //Y
        tW / 6,                         //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );

    inputMr = CreateWindow(
        "EDIT",                         //TIPO
        "",                             //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        WS_BORDER| SS_CENTER,           //ESTILOS
        (tW / 2) + (tW / 6),            //X
        120,                            //Y
        (tW / 2) - (tW / 6),            //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        (HMENU)ID_MR,                   //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(inputMr, WM_SETFONT, (WPARAM)h3, TRUE);

    calculate = CreateWindow(
        "BUTTON",                       //TIPO
        "CALCULAR",                     //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        WS_BORDER| SS_CENTER,           //ESTILOS
        (tW / 2),                       //X
        160,                            //Y
        (tW / 2),                       //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        (HMENU)ID_CALC,                 //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(calculate, WM_SETFONT, (WPARAM)h2, TRUE);

    // RESULTADOS

    resultTitle = CreateWindow(
        "STATIC",                       //TIPO
        "RESULTADOS",                   //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        0,                              //X
        200,                            //Y
        tW,                             //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(resultTitle, WM_SETFONT, (WPARAM)h1, TRUE);

    damageATitle = CreateWindow(
        "STATIC",                       //TIPO
        "DANO FINAL",                   //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        0,                              //X
        240,                            //Y
        tW / 2,                         //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(damageATitle, WM_SETFONT, (WPARAM)h2, TRUE);

    reductionTitle = CreateWindow(
        "STATIC",                       //TIPO
        "REDUCAO",                      //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        tW / 2,                         //X
        240,                            //Y
        tW / 2,                         //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(reductionTitle, WM_SETFONT, (WPARAM)h2, TRUE);

    labelPhisicalA = CreateWindow(
        "STATIC",                       //TIPO
        "Fisico",                       //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        (tW / 2) - ((tW / 6) / 2),      //X
        280,                            //Y
        (tW / 6),                       //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(labelPhisicalA, WM_SETFONT, (WPARAM)h4, TRUE);

    labelMagicA = CreateWindow(
        "STATIC",                       //TIPO
        "Magico",                       //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        (tW / 2) - ((tW / 6) / 2),      //X
        320,                            //Y
        (tW / 6),                       //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(labelMagicA, WM_SETFONT, (WPARAM)h4, TRUE);

    labelTrueA = CreateWindow(
        "STATIC",                       //TIPO
        "Verdadeiro",                   //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        (tW / 2) - ((tW / 6) / 2),      //X
        360,                            //Y
        (tW / 6),                       //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(labelTrueA, WM_SETFONT, (WPARAM)h5, TRUE);

    
    labelEndA = CreateWindow(
        "STATIC",                       //TIPO
        "TOTAL",                        //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        (tW / 2) - ((tW / 6) / 2),      //X
        400,                            //Y
        (tW / 6),                       //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(labelEndA, WM_SETFONT, (WPARAM)h4, TRUE);


    // RESULTADOS

    phisicalA = CreateWindow(
        "STATIC",                       //TIPO
        "",                             //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        0,                              //X
        280,                            //Y
        (tW / 2) - ((tW / 6) / 2),      //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(phisicalA, WM_SETFONT, (WPARAM)h4, TRUE);

    magicA = CreateWindow(
        "STATIC",                       //TIPO
        "",                             //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        0,                              //X
        320,                            //Y
        (tW / 2) - ((tW / 6) / 2),      //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(magicA, WM_SETFONT, (WPARAM)h4, TRUE);

    trueA = CreateWindow(
        "STATIC",                       //TIPO
        "",                             //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        0,                              //X
        360,                            //Y
        (tW / 2) - ((tW / 6) / 2),      //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(trueA, WM_SETFONT, (WPARAM)h4, TRUE);

    endA = CreateWindow(
        "STATIC",                       //TIPO
        "",                             //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        0,                              //X
        400,                            //Y
        (tW / 2) - ((tW / 6) / 2),      //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(endA, WM_SETFONT, (WPARAM)h4, TRUE);

    reducPhisical = CreateWindow(
        "STATIC",                       //TIPO
        "",                             //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        (tW / 2) + ((tW / 6) / 2),      //X
        280,                            //Y
        (tW / 2) - ((tW / 6) / 2),      //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(reducPhisical, WM_SETFONT, (WPARAM)h4, TRUE);

    reducMagic = CreateWindow(
        "STATIC",                       //TIPO
        "",                             //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        (tW / 2) + ((tW / 6) / 2),      //X
        320,                            //Y
        (tW / 2) - ((tW / 6) / 2),      //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(reducMagic, WM_SETFONT, (WPARAM)h4, TRUE);

    reducTrue = CreateWindow(
        "STATIC",                       //TIPO
        "",                             //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        (tW / 2) + ((tW / 6) / 2),      //X
        360,                            //Y
        (tW / 2) - ((tW / 6) / 2),      //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(reducTrue, WM_SETFONT, (WPARAM)h4, TRUE);

    reducEnd = CreateWindow(
        "STATIC",                       //TIPO
        "",                             //TEXTO
        WS_CHILD | WS_VISIBLE |         //ESTILOS
        SS_CENTER| SS_CENTERIMAGE |     //ESTILOS
        WS_BORDER,                      //ESTILOS
        (tW / 2) + ((tW / 6) / 2),      //X
        400,                            //Y
        (tW / 2) - ((tW / 6) / 2),      //WIDTH
        40,                             //HEIGTH
        hwnd,                           //HWND
        NULL,                           //HMENU
        hInst,                          //HINST
        NULL                            //LPARAM
    );
    SendMessage(reducEnd, WM_SETFONT, (WPARAM)h4, TRUE);
    
}

void command(WPARAM wParam)
{
    if(LOWORD(wParam) == ID_CALC) {
            double danoFisico = getContent(inputPhisical);
            double danoMagico = getContent(inputMagic);
            double danoVerdadeiro = getContent(inputTrue);
            double armor = getContent(inputArmor);
            double mr = getContent(inputMr);

            double danoFisicoFinal = reduction(armor, danoFisico, 1);
            double danoMagicoFinal = reduction(mr, danoMagico, 1);
            double danoVerdadeiroFinal = reduction(0, danoVerdadeiro, 0);

            double reducaoFisico     = (danoFisico > 0) ? 100.0 - ((danoFisicoFinal * 100.0) / danoFisico) : 0;
            double reducaoMagico     = (danoMagico > 0) ? 100.0 - ((danoMagicoFinal * 100.0) / danoMagico) : 0;
            double reducaoVerdadeiro = 0.0;

            double reducaoF = danoFisico - danoFisicoFinal;
            double reducaoM = danoMagico - danoMagicoFinal;
            double reducaoT = danoVerdadeiro - danoVerdadeiroFinal;

            double totalOriginal = danoFisico + danoMagico + danoVerdadeiro;
            double totalFinal    = danoFisicoFinal + danoMagicoFinal + danoVerdadeiroFinal;
            double totalReduc    = reducaoF + reducaoM + reducaoT;

            double totalPer = (totalOriginal > 0) ? ((totalReduc / totalOriginal) * 100.0) : 0.0;

            char buf[64];
            sprintf(buf, "%.2f", danoFisicoFinal);
            SetWindowText(phisicalA, buf);

            sprintf(buf, "%.2f", danoMagicoFinal);
            SetWindowText(magicA, buf);

            sprintf(buf, "%.2f", danoVerdadeiroFinal);
            SetWindowText(trueA, buf);

            sprintf(buf, "%.2f", totalFinal);
            SetWindowText(endA, buf);

            sprintf(buf, "%.0f(%.2f%%)", reducaoF, reducaoFisico);
            SetWindowText(reducPhisical, buf);

            sprintf(buf, "%.0f(%.2f%%)", reducaoM, reducaoMagico);
            SetWindowText(reducMagic, buf);

            sprintf(buf, "%.0f(%.2f%%)", reducaoT, reducaoVerdadeiro);
            SetWindowText(reducTrue, buf);

            sprintf(buf, "%.0f(%.2f%%)", totalReduc, totalPer);
            SetWindowText(reducEnd, buf);
    }
}
