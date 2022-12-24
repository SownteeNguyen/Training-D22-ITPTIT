#include <stdio.h>
#include <math.h>

int kiemTraSoChinhPhuong(int h)
{
    int k = sqrt(h);
    if (k * k == h)
        return 1;
    else
        return 0;
}

int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int n;
        int count = 0;
        int arr[1000];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (kiemTraSoChinhPhuong(arr[i]))
                ++count;
        }
        printf("%d\n", count);
    }
}