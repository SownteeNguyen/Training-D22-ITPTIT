#include<stdio.h>
#define ll long long
int main() {
	double a; scanf("%lf",&a);
	double c = (a-32)/1.8;
	if (c * 100 == (int)(c * 100))printf("%g",c);
	else printf("%.2lf",c);
}