#include <stdio.h>

int main()
{
    int n, idx;
    scanf("%d", &n);
    int arr[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &idx);
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % idx == 0)
            check = 1;
    }
    if (!check)
    {
        printf("-1");
        return 0;
    }
    check = 0;
    for (int i = 0; i < n; i++)
    {
        if (!check && arr[i] % idx == 0)
        {
            check = 1;
            continue;
        }
        printf("%d ", arr[i]);
    }
}
