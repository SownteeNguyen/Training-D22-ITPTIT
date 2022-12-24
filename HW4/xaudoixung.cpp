// Kiểm tra xâu đối sứng

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char c[10000];
        scanf("%s", &c);
        int len = strlen(c);
        int i = 0, j = len - 1;
        int check = 0;
        while (i <= j)
        {
            if (c[i] != c[j])
            {
                check = 1;
                break;
            }
            i++;
            j--;
        }
        if (check == 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}
