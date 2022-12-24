/*Description
Cho 1 xâu kí tự, hãy chèn kí tự x vào vị trí thứ k của xâu.
(Xâu được đánh dấu từ vị trí thứ 0, có không quá 1000 kí tự)

Input
Dòng 1 chứa 1 xâu kí tự .
2 dòng tiếp theo chứa kí tự x, và vị trí k (0<=k<strlen()).

Output
T dòng, in ra xâu sau khi chèn.*/

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    char str[1005];
    char x;
    int k;
    scanf("%d\n", &t);
    while (t--)
    {
        gets(str);
        scanf("%c\n%d", &x, &k);
        int len = strlen(str);
        for (int i = len; i > k; i--)
            str[i] = str[i - 1];
        str[k] = x;
        printf("%s\n", str);
    }
}