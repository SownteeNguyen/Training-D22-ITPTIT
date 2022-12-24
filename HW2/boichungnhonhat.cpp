#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        long long a, b, kq, step;
        scanf("%lld%lld", &a, &b);
        if (a > b)
        {
            step = a;
        }
        else
        {
            step = b;
        }

        for (long long i = step; i <= a * b; i += step)
        {
            if (i % a == 0 && i % b == 0)
            {
                kq = i;
                break;
            }
        }
        printf("%lld\n", kq);
    }
}

#include <stdio.h>
#include <algorithm>

int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        long long a, b, kq;
        scanf("%lld%lld", &a, &b);
        kq = a * b / std::__gcd(a, b);
        printf("%lld\n", kq);
    }
}