/*Description
Cho 1 xâu kí tự, hãy đếm xem có bao nhiêu kí tự x xuất hiện trong xâu. (Xâu có không quá 1000 kí tự)

Input
Dòng đầu tiên chứa số lượng bộ test T (T<=100).
Mỗi test gồm 2 dòng tiếp theo:
Dòng 1 chứa 1 kí tự x.
Dòng 2 chứa 1 xâu kí tự.

Output
T dòng, số các kí tự x xuất hiện trên mỗi xâu.*/

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char x;
        scanf("%c\n", &x);
        char c[10000];
        gets(c);
        int len = strlen(c);
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if (c[i] == x)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}
