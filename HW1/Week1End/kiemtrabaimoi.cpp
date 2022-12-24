#include <stdio.h>

int main()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    if (a > b)
    {
        long long temp = a;
        a = b;
        b = temp;
    }
    long long m = (a - 1) / 6 + (a - 1) / 8 + (a - 1) / 10 - (a - 1) / 24 - (a - 1) / 40 - (a - 1) / 30 + (a - 1) / 120;
    long long n = b / 6 + b / 8 + b / 10 - b / 24 - b / 40 - b / 30 + b / 120;
    long long v = n - m;
    printf("%lld", v);
}