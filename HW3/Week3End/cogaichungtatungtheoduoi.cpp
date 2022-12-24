/*Any natural number can be analyzed as the sum of 2 primes. Write a program to split a natural number into the sum of 2 primes (all cases), if not, then write down the analysis. it's itself
 */

/* Input : 10*/
/* Output :
3 7
5 5
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
    {
        int j = n - i;
        int check = 1;
        int sqr = sqrt(i);
        for (int k = 2; k <= sqr; k++)
        {
            if (i % k == 0)
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            int check = 1;
            int sqrtt = sqrt(j);
            for (int k = 2; k <= sqrtt; k++)
            {
                if (j % k == 0)
                {
                    check = 0;
                    break;
                }
            }
            if (check == 1)
            {
                printf("%d %d", i, j);
                printf("\n");
            }
        }
    }
}