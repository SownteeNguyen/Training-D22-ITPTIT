#include <iostream>

#define MAX 1000

void nhapMang(int arr[], int &n);
void xuatMang(int arr[], int n);
void themMotPhanTuVaoMang(int a[], int &n, int idx, int x);

int main()
{
    int myArray[MAX];
    int nSize;
    nhapMang(myArray, nSize);
    int x;
    scanf("%d", &x);
    int idx;
    scanf("%d", &idx);
    themMotPhanTuVaoMang(myArray, nSize, idx, x);
    xuatMang(myArray, nSize);
    return 0;
}

void nhapMang(int arr[], int &n)
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void xuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void themMotPhanTuVaoMang(int a[], int &n, int idx, int x)
{
    if (idx >= 0 && idx <= n)
    {
        for (int i = n; i > idx; i--)
            a[i] = a[i - 1];
        a[idx] = x;
        n++;
    }
}
