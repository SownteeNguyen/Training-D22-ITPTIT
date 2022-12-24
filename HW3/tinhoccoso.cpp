#include <stdio.h>

int main()
{
    long long n, m;
    scanf("%lld%lld", &n, &m);
    long long arr[n][m];
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }

    long long sumRow = 0;
    long long sumCol = 0;
    
    for (long long i = 0; i < n; i++) {
    	for (long long j = 0; j < m; j++) {
    		printf("%lld ", arr[i][j]);
    		sumRow += arr[i][j];
		}
		printf("%lld\n", sumRow);
        sumRow = 0;
	}

    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            sumCol += arr[j][i];
        }
        printf("%lld ", sumCol);
        sumCol = 0;
    }
    
//        for (long long i = 0; i < n; i++)
//    {
//        for (long long j = 0; j < m; j++)
//        {
//            sumRow += arr[i][j];
//        }
//        printf("%lld\n", sumRow);
//        sumRow = 0;
//    }
}
