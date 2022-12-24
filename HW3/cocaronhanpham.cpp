/*Cờ caro nhân phẩm

Description
Bun rất thích chơi cờ nhân phẩm, tuy nhiên dạo này server của trò chơi này khá chậm khiến cho cậu rất khó chịu, vì vậy cậu đã rủ người bạn của mình chơi một tựa game mang tên cờ caro nhân phẩm.

Luật chơi: Hai người sẽ nhắm mắt vào đánh bừa X và O (1 và 0) vào trong bảng caro, sau khi đánh hết tất cả các ô chúng ta sẽ thu được một bàn cờ chứa đủ các kí tự X O ở các vị trí. Nếu một người đánh được k ký tự liên tiếp theo chiều ngang hoặc dọc thì người đó sẽ giành chiến thắng.

Nếu như cả 2 đều có đủ k ký tự liên tiếp hoặc đều không đủ thì in ra "Draw"
Nếu như Bun thắng hãy in ra "Game de"
Nếu như Bun thua hãy in ra "Chap thoi"
Bạn hãy xem sau khi chơi thì Bun sẽ giành được chiến thắng hay không nhé. Biết rằng do hào quang nhân vật chính nên Bun luôn được đánh X
Input
Dòng đầu tiên ghi số bộ test T (1 ≤ T ≤ 100)
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng. Dòng đầu tiên là 2 số n, k, Dòng thứ 2 là một ma trận nhị phân chỉ gồm 0 và 1, 1 tương trưng cho X, 0 tượng trưng cho O (5 ≤ n ≤ 100, 2 ≤ k ≤ 100)
Output
Đưa ra kết quả bài toán theo từng dòng là kết quả của ván cờ đó.*/

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 1)
                {
                    dem++;
                }
                else
                {
                    dem = 0;
                }
                if (dem == k)
                {
                    printf("Game de");
                }
                else if (dem == k - 1)
                {
                    printf("Chap thoi");
                }
                else
                {
                    printf("Draw");
                }
            }
        }
    }
}