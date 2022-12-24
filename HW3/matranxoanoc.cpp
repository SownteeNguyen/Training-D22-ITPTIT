#include <stdio.h>
#define MAX 100

int a[MAX][MAX], n;

void inMaTran()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

void taoMaTranXoanOc()
{
    int d = 0, i, gt = 1;
    int hang = n - 1, cot = n - 1;
    while (gt <= n * n)
    {
        for (i = d; i <= cot; i++)
        {
            a[d][i] = gt++; // gan tu trai sang phai
        }
        for (i = d + 1; i <= hang; i++)
        {
            a[i][cot] = gt++; // gan tu tren xuong duoi
        }
        for (i = cot - 1; i >= d && gt <= n * n; i--)
        {
            a[hang][i] = gt++; // tu phai sang trai
        }
        for (i = hang - 1; i > d && gt <= n * n; i--)
        {
            a[i][d] = gt++; // tu duoi len
        }
        d++;
        hang--;
        cot--; // thu nho xoan oc
    }
    inMaTran();
}

int main()
{
    scanf("%d", &n);
    taoMaTranXoanOc();
}
