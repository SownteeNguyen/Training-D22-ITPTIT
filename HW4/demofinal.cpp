//#include <stdio.h>
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[n][n];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int dem1 = 0;
//	int dem2 = 0;
//	int dem3 = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (arr[i][j] == 1 ) {
//				dem1++;
//			} else if (arr[i][j] == 0) {
//				dem2++;
//			}
//		}
//		if (dem1 > dem2) {
//			dem3++;
//		}
//		dem1 = 0;
//		dem2 = 0;
//	}
//	printf("%d", dem3);
//}

//#include <stdio.h>
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i < 2*n; i++) {
//		for (int j = 1; j < 2*n; j++) {
//			if ( i == 1 || j == 2*n - 1 || j == 1) {
//				printf("*");
//			} else if ((i == j || j == 2*n - i) && i <= n) {
//				printf("*");
//			} else {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[n+5];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("I love ptiT");
}

//#include <stdio.h>
//#include <math.h>
//
//long long checkSNT (long long n) {
//	if (n < 2 ) {
//		return 0;
//	}
//	int sqr = sqrt(n);
//	for (int i = 2; i <= sqr; i++) {
//		if (n % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main() {
//	long long L, R;
//	scanf("%lld%lld", &L, &R);
//	int dem = 0;
//	int sqr = sqrt(R);
//	int sqrtt = sqrt(sqr);
//	for ( long long i = 1; i <= sqrtt; i++) {
//		if (checkSNT(i)) {
//			if ( pow(i, 4) <= R && pow(i, 4) >= L) {
//				++dem;
//			}
//		}
//	}
//	printf("%d", dem);
//}
