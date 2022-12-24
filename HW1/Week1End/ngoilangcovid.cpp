#include <stdio.h>

int main()
{
    long long N, x, y;
    scanf("%lld%lld%lld", &N, &x, &y);
    if (x - y > 0)
    {
        printf("%lld ", x - y);
    }
    else
    {
        printf("0 ");
    }

    if (N - y > x)
    {
        printf("%lld", x);
    }
    else
    {
        printf("%lld", N - y);
    }
}