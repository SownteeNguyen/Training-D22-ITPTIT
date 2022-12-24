#include<stdio.h>
#include<math.h>
#define ll long long
const ll mod = 100000007;
ll check(ll n){
    ll fibo[n];
    fibo[0] = 0; fibo[1] = 1;
    for (ll i=2; i<=n; i++){
        fibo[i] = fibo[i-1] % mod + fibo[i-2] % mod;
        fibo[i] %= mod;
    }
    return fibo[n] % mod;
}
int main(){
    ll n; scanf("%lld",&n);
    printf("%lld",check(n));
}