#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    long long arr1[n][n];
    long long arr2[n][n];
    long long arr3[n][n];
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            scanf("%lld", &arr1[i][j]);
        }
    }

    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            scanf("%lld", &arr2[i][j]);
        }
    }

    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            long long tong = 0;
            for (long long k = 0; k < n; k++)
            {
                tong = tong + (arr1[i][k] * arr2[k][j]);
            }
            arr3[i][j] = tong;
        }
    }

    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            printf("%lld ", arr3[i][j]);
        }
        printf("\n");
    }
}
