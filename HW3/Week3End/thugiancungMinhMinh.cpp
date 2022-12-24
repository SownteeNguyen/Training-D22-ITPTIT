/*Cho ma trận A[n][m]. Nhiệm vụ của bạn là in các phần tử của ma trận theo hình xoắn ốc ngược.*/
/*Input :
1 2 3 4
12 13 14 5
11 16 15 6
10 9 8 7
*/
/*Output :
16 15 14 13
12 11 10 9
8 7 6 5
4 3 2 1
*/

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    //
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        for (int k = j; k < m; k++)
        {
            printf("%d ", a[i][k]);
        }
        i++;
        for (int k = i; k < n; k++)
        {
            printf("%d ", a[k][m - 1]);
        }
        m--;
        if (i < n)
        {
            for (int k = m - 1; k >= j; k--)
            {
                printf("%d ", a[n - 1][k]);
            }
            n--;
        }
        if (j < m)
        {
            for (int k = n - 1; k >= i; k--)
            {
                printf("%d ", a[k][j]);
            }
            j++;
        }
    }
}