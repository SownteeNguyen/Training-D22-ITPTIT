#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int n;
        scanf("%d", &n);
        int sum = 0;
        for (int i = 1; i * i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i + n / i;
            }
        }
        sum -= n;
        if (sum == n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}