#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int n;
        scanf("%d", &n);
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        printf("%d\n", count);
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}