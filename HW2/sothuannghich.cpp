#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int n;
        scanf("%d", &n);
        int dao = 0;
        int m = n;
        while (m > 0)
        {
            dao = dao * 10 + m % 10;
            m /= 10;
        }
        if (dao == n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}