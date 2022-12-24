#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        int run = i, step = -1;
        for (int j = 1; j <= n; ++j)
        {
            printf("%d", run);
            if (run == 1)
                step = 1;
            run += step;
        }
        printf("\n");
    }

    return 0;
}