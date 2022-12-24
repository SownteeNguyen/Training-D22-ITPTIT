#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    double x = (double)(-1 + sqrt(1 + 8 * n)) / 2;
    if (n == 1)
    {
        printf("2");
    }
    else if (x == (long long)x)
    {
        printf("%lld", (long long)x);
    }
    else
    {
        long long alo1 = ceil(x);
        long long alo = alo1 * (alo1 + 1) / 2 - n;
        printf("%lld", alo);
    }
}