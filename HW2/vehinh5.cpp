#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = -n + 1; i < n; ++i)
    {
        for (int j = -n + 1; j < n; ++j)
        {
            printf("%d", (int)fmax(abs(i), abs(j)) + 1);
        }
        printf("\n");
    }
}