#include<stdio.h>
#define ll long long
int main() {
	ll a,b,c; scanf("%lld%lld%lld",&a,&b,&c);
	if (a >= b && a >= c && a % b == 0 && a % c == 0) printf("YES");
	else printf("N0");
}