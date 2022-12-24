#include <stdio.h>

int main() {
    double a, b;
    int x, y, z, g, h;
    scanf("%lf%lf", &a, &b);
    double n = 1.00000 * a / b;
    x = (n * 100000) - ((int)(n * 10000)) * 10;
    y = (n * 10000) - ((int)(n * 1000)) * 10;
    z = (n * 1000) - ((int)(n * 100)) * 10;
    g = (n * 100) - ((int)(n * 10)) * 10;
    h = (n * 10) - ((int)(n * 1)) * 10;
    printf("%d", x + y + z + g + h);
}