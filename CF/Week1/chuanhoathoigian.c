#include <stdio.h>

int main () {
    int s;
    scanf("%d", &s);
    int gio = s / 3600;
    int phut = (s - 3600 * gio) / 60;
    int giayConLai = s - 3600 * gio - 60 * phut;
    printf("%.2d:%.2d:%.2d", gio, phut, giayConLai);
}