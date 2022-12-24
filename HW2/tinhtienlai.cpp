#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        double n = ((double)a * b * c) / 100;
        printf("%g\n", n);
    }
}