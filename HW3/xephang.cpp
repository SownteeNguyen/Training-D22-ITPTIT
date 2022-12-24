#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int arr[m][n];
    int dem = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        int check = 1;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[i][j] != arr[i][j + 1])
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            ++dem;
        }
    }

    printf("%d", dem);
}