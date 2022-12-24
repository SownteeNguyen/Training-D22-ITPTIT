#include <stdio.h>

int main() {
    int gio, phut;
    scanf("%d:%d", &gio, &phut);
    int a = ( 23 - gio ) * 60;
    int b = (60 - phut);
    int c = a + b;
    int d = c / 60;
    int e = c % 60;
    printf("%.2d:%.2d", d, e);
}
