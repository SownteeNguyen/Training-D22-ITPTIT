#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        long long sum = 0;
        long long n;
        scanf("%lld", &n);
        int sqr = sqrt(n);
        for (long long i = 1; i <= sqr; i++)
        {
            if (n % i == 0 && i * i != n)
            {
                sum += i + n / i;
            }
            else if (n % i == 0 && i * i == n)
            {
                sum += i + n / i - sqr;
            }
        }
        printf("%lld\n", (long long)sum);
    }
}