#include <stdio.h>

// int check(int a[], int n)
// {
//     int arr[30] = {};
//     int idx = 0;
//     while (n > 0)
//     {
//         arr[idx++] = n % 10;
//         n /= 10;
//     }
//     int left = 0, right = idx - 1;
//     while (left < right)
//     {
//         if (arr[left] != arr[right])
//         {
//             return 0;
//         }
//         left++;
//         right--;
//     }
//     return 1;
// }
int check(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int n;
        scanf("%d", &n);
        int arr[n + 5];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        if (check(arr, n) == 1)
            printf("1");
        else
            printf("0");
        printf("\n");
    }
}
