#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    int chonHinh; scanf("%d", &chonHinh);
    double dienTich;
    if (chonHinh == 1) {
        int r; scanf("%d", &r);
        dienTich = PI*r*r;
        printf("%.2lf", dienTich);
    } else if (chonHinh == 2) {
        int chieuDai, chieuRong; scanf("%d%d", &chieuDai, &chieuRong);
        dienTich = chieuDai * chieuRong;
        printf("%d", (int)dienTich);
    } else if (chonHinh == 3) {
        int a, b, c; scanf("%d%d%d", &a, &b, &c);
        double p = 1.00*( a + b + c ) / 2;
        if ( a + b <= c || a + c <= b || b + c <= a ) {
            printf("Nope");
        } else {
            dienTich = sqrt(p * (p - a) * (p - b) * (p - c));
            if (dienTich == (int)dienTich) {
                printf("%d", (int)dienTich);
            } else {
                printf("%.2lf", (double)dienTich);
            }
        }
    }
}