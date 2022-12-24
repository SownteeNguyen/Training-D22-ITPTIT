// Giải phương trình bậc 4
#include <stdio.h>

int main()
{
    long long a, b, c, d, e;
    scanf("%lld%lld%lld%lld%lld", &a, &b, &c, &d, &e);
    int dem = 0;
    for (long long i = -1000; i <= 1000; ++i)
    {
        if (a * i * i * i * i + b * i * i * i + c * i * i + d * i + e == 0 && i > 0)
        {
            ++dem;
        }
    }
    if (dem > 0)
        printf("%d", dem);
    else
        printf("-1");
}