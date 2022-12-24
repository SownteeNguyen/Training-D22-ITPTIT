/*Chuẩn hóa họ tên

Description
Cho xâu họ tên chưa được đưa về dạng chuẩn.

Một xâu họ tên chuẩn là chữ cái đầu của mỗi từ viết hoa, các chữ cái sau viết thường, các từ cách nhau 1 khoảng trắng “ ”. Trước từ đầu tiên không có 1 khoảng trắng nào.

(Xâu có không quá 1000 kí tự)

Input
Dòng đầu tiên chứa số lượng bộ test T (T<=100).
Mỗi test gồm 1 xâu họ tên.

Output
In ra họ tên đã được chuẩn hóa trên mỗi dòng.*/
/*
Input:
2
IT PTIT
mAi la anh eM*/

/*
Output:
It Ptit
Mai La Anh Em*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[1001];
        gets(s);
        char tmp[100];
        char chuaDau[100];
        char *p;
        int k = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            s[i] = tolower(s[i]);
        }
        p = strtok(s, " ");
        int i;
        while (p)
        {
            p[0] = toupper(p[0]);
            strcpy(tmp, p);
            // chuaDau[k++] = p[0];
            p = strtok(NULL, " ");
            i++;
        }
        for (int i = 0; i < strlen(tmp); i++)
        {
            printf("%c", tmp[i]);
        }
        // for (int i = 0; i < strlen(chuaDau) - 1; i++)
        // {
        //     printf("%c", chuaDau[i]);
        // }
    }
}