#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    long long sumRow = 0;
    long long sumCol = 0;
    long long max1 = sumRow;
    long long max2 = sumCol;

    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            sumRow += arr[i][j];
        }
        if (sumRow > max1)
        {
            max1 = sumRow;
        }
        sumRow = 0;
    }

    printf("%lld ", max1);

    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            sumCol += arr[j][i];
        }
        if (sumCol > max2)
        {
            max2 = sumCol;
        }
        sumCol = 0;
    }

    printf("%lld", max2);
}