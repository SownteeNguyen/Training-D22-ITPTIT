#include <stdio.h>

int main()
{
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
        if (mangDanhDau[arr[i]] > 0)
        {
            printf("%d %d\n", arr[i], mangDanhDau[arr[i]]);
            mangDanhDau[arr[i]] = 0;
        }
        else
        {
            printf("%d\n", arr[i]);
        }
    }
}