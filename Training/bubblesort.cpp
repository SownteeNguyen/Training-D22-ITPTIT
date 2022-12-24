#include <stdio.h>
#include <math.h>

// void bubbleSort(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (arr[i] > arr[j]) {
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
// }

void bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	bubbleSort(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}
