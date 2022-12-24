#include <stdio.h>
#define N 100
#define M 100

void nhapMaTran(int[][M], int, int);
void xuatMaTran(int[][M], int, int);
void xoayMaTran(int[][M], int[][M], int, int, int *, int *);

int main()
{
    int A[N][M];
    int B[N][M];
    int aRow, aCol;
    int bRow, bCol;

    scanf("%d%d", &aRow, &aCol);

    nhapMaTran(A, aRow, aCol);
    xoayMaTran(A, B, aRow, aCol, &bRow, &bCol);
    xuatMaTran(B, bRow, bCol);
}

void xoayMaTran(int A[][M], int B[][M], int aRow, int aCol, int *bRow, int *bCol)
{
    *bRow = aCol;
    *bCol = aRow;

    for (int j = aCol - 1; j >= 0; j--)
    {
        for (int i = 0; i < aRow; i++)
        {
            B[aCol - 1 - j][i] = A[i][j];
        }
    }
}

void nhapMaTran(int maTran[][M], int nRow, int nCol)
{
    for (int i = 0; i < nRow; i++)
        for (int j = 0; j < nCol; j++)
        {
            scanf("%d", &maTran[i][j]);
        }
}

void xuatMaTran(int maTran[][M], int nRow, int nCol)
{
    for (int i = nRow - 1; i >= 0; i--)
    {
        for (int j = 0; j < nCol; j++)
        {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}