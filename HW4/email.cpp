/*Email

Description
Địa chỉ email của thành viên IT PTIT được cấp theo nguyên tắc ghép tên với chữ cái đầu tiên của họ và tên đệm. Viết chương trình cho phép tạo các địa chỉ email theo tên thành viên.

Input
Dòng đầu tiên chứa T bộ test (1 ≤ T ≤ 100).
Mỗi test gồm 1 dòng duy nhất chứa họ và tên thành viên IT PTIT.

Output
T dòng, mỗi dòng in ra địa chỉ email sau khi chuẩn hóa họ tên.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char c[100] = {};
        char tmp[100];
        char chuaDau[100];
        char *p;
        scanf("\n");
        gets(c);
        int k = 0;
        for (int i = 0; i < strlen(c); i++)
        {
            c[i] = tolower(c[i]);
        }
        p = strtok(c, " ");
        while (p)
        {
            strcpy(tmp, p);
            chuaDau[k++] = p[0];
            p = strtok(NULL, " ");
        }
        printf("%s", tmp);
        for (int i = 0; i < strlen(chuaDau) - 1; i++)
        {
            printf("%c", chuaDau[i]);
        }
        printf("@itptit.edu.vn\n");
    }
}
