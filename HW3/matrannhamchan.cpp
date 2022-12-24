#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int dem1 = 0;
	int dem2 = 0;
	int dem3 = 0;
	int arr[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < m; i++)
	{
		int check = 1;
		for (int j = 0; j < n; j++)
		{
			if (arr[j][i] == 1)
			{
				++dem1;
			}
			if (arr[j][i] == 0)
			{
				++dem2;
			}
		}
		if (dem1 > dem2)
		{
			++dem3;
		}
		dem1 = 0;
		dem2 = 0;
	}
	printf("%d", dem3);
}
