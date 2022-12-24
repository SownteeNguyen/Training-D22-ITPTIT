#include <stdio.h>

int main()
{
    int max = -1e9, max2 = -1e9;
    int n;
    scanf("%d", &n);
    int arr[n + 5] = {};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int mangDanhDau[100005] = {};
    for (int i = 0; i < n; i++)
    {
        mangDanhDau[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (mangDanhDau[arr[i]] > max)
        {
            max = mangDanhDau[arr[i]];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (mangDanhDau[arr[i]] > max2 && mangDanhDau[arr[i]] < max)
        {
            max2 = mangDanhDau[arr[i]];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (mangDanhDau[arr[i]] == max2)
        {
            printf("%d ", arr[i]);
            break;
        }
    }
}