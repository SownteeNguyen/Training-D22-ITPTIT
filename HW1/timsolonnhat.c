#include <stdio.h>

int main() {
    int a, b, c, d, maxValue;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    maxValue = a;
    if (b >= maxValue) {
        maxValue = b;
    }
    if (c >= maxValue) {
        maxValue = c ;
    }
    if (d >= maxValue) {
        maxValue = d;
    }
    printf("%d", maxValue);
}