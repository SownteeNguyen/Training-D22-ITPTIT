// In ngược chuỗi kí tự
#include <stdio.h>
#include <string.h>

int main()
{
    char c[10000];
    gets(c);
    int len = strlen(c);
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", c[i]);
    }
}
