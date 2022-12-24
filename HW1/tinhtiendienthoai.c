#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
    ll n; scanf("%lld",&n);
    if (n > 150) 
    n = 400 * 100 + 600 * 50 + (n - 150) * 200;
    else if (n > 50){
        n = 600 * 50 + (n - 50) * 400;
    }
    else n = n * 600;
    printf("%lld",n); 
}