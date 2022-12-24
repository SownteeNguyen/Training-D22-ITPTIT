// delete array
#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        long long n, x;
        int arr[n];
        int m = n;
        int array[m];
        scanf("%lld%lld", &n, &x);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i % 2 == 1)
                {
                    arr[i] = array[j];
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            printf("array[%d] = %d ", i, array[i]);
        }
    }
}