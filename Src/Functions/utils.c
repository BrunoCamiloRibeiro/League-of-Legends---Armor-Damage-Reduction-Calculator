#include <windows.h>

double getContent(HWND hEdit) {
    char buf[64] = {0};
    if (GetWindowText(hEdit, buf, sizeof(buf)) > 0) {
        char *endptr;
        double val = strtod(buf, &endptr);

        if (*endptr != '\0') {
            return 0.0;
        }
        return val;
    }
    return 0.0;
}