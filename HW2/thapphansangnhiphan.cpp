#include <stdio.h>

void chuyen10Sang2(long long n)
{
    long long array[1000];

    long long i = 0;
    while (n > 0)
    {
        array[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (long long j = i - 1; j >= 0; j--)
    {
        printf("%lld", array[j]);
    }
    printf("\n");
}

int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        long long n;
        scanf("%lld", &n);
        chuyen10Sang2(n);
    }
}