#include<stdio.h>

int main() {
	unsigned long long a, b;
	char c;
	scanf("%lld %c %lld", &a, &c, &b);
	switch (c) {
	case '+':
		printf("%lld", a + b);
		break;
	case '-':
		printf("%lld", a - b);
		break;
	case '*':
		printf("%lld", a * b);
		break;
	case '/':
		if (b == 0) {
			printf("MATH ERROR!");
		} else {
			printf("%.2f", (float)a / b);
		}
		break;
    default:
        printf("MATH ERROR!");
        break;
	}
	return 0;
}