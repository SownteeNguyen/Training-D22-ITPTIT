#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, m;
		scanf("%d%d", &n, &m);
		printf("%lld\n", (long long)n + m);
	}
}
