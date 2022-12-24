#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (a[i][j] == 0)
                {
                    a[i][j] = 1;
                }
                else
                {
                    a[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("[");
            for (int j = n - 1; j >= 0; j--)
            {
                if (j == 0)
                {
                    printf("%d", a[i][j]);
                }
                else
                {
                    printf("%d, ", a[i][j]);
                }
            }
            if (i == n - 1)
            {
                printf("]");
            }
            else
            {
                printf("], ");
            }
        }
        printf("\n");
    }
}