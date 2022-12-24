#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    double sum = 1 - (1 / ((double)n + 1));
    printf("%.2lf", sum);
}