#include <stdio.h>
#include <math.h>

long long uocChung(long long a, long long b) {
	if (a > b) {
		long long temp = a;
		a = b;
		b = temp;
	}
	int tg;
	while (b != 0) {
		tg = a % b;
		a = b;
		b = tg;
	}
	long long dem = 0;
	int can = sqrt(a);
	for (int i = 1; i <= can; i++) {
		if (a % i == 0 && i * i != a) {
			dem += 2;
		} else if (a % i == 0 && i * i == a) {
			dem++;
		}
	}
	return dem;
}

int main() {
	int x;
	scanf("%d", &x);
	while (x--) {
		long long a, b;
		scanf("%lld%lld", &a, &b);
		if (uocChung(a, b) == 0)
			printf("INF\n");
		else
			printf("%lld\n", uocChung(a, b));
	}
}
