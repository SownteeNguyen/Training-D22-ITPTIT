/*Lại là mật mã

Description
Sau khi đã mở được căn phòng nhốt công chúa Alice, tưởng chừng đã có thể đưa công chúa về an toàn, nhưng không, mụ phù thủy đã đề phòng công chúa chạy thoát bằng cách xích Alice bằng 1 ổ khóa ma thuật không thể chặt đứt mà chỉ có thể mở bằng cách nhập đúng mật mã, biết rằng mật mã gồm 3 số nguyên vì có 3 ô để nhập mật mã.

Đang loay hoay không biết mật mã như thế nào thì chợt công chúa Alice đã nhận ra rằng: "Trên tờ giấy ghi mật mã của mụ phù thủy có 3 loại ký tự: Chữ, số và ký tự đặc biệt. Vậy thì có thể là mật mã chính là số lượng của mỗi loại ký tự".

Nhưng mụ phù thủy đã sắp về nên phải nhanh chóng tìm được mật mã, không thể ngồi đếm từng ký tự được, các bạn hãy viết 1 chương trình giải quyết vấn đề trên 1 cách nhanh nhất trước khi mụ phù thủy về nhé!

Input
Một dòng duy nhất là dãy mật mã được ghi trên tờ giấy của mụ phù thủy, dãy mật mã có độ dài không quá 10^410
4
 .

Output
Gồm 3 dòng:
Dòng đầu tiên là số lượng chữ cái trong mật mã.
Dòng thứ hai là số lượng chữ số trong mật mã.
Dòng cuối cùng là số lượng ký tự đặc biệt có trong mật mã (Khoảng trống cũng được coi là ký tự đặc biệt).*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[10005];
    gets(str);
    int len = strlen(str);
    int alpha = 0, digit = 0, special = 0;
    for (int i = 0; i < len; i++)
    {
        if (isalpha(str[i]))
            alpha++;
        else if (isdigit(str[i]))
            digit++;
        else
            special++;
    }
    printf("%d\n", alpha);
    printf("%d\n", digit);
    printf("%d", special);
}