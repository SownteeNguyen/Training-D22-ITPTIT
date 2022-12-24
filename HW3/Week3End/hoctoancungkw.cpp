#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, k;
        scanf("%lld %lld", &n, &k);
        long long sum = 0;
        for (int j = k; j <= n; j += k)
        {
            sum += j % 10;
        }
        printf("%lld\n", sum);
    }
}
