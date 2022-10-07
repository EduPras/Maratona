#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll fe(ll N, ll M){
  ll base = 2;
  if(N == 0) return 0;
  ll ans = 1;
  while(N > 0){
    if(N&1){
      ans *= base;
    }
    base*=base;

    N = N>>1;
  }
  return ans;
}
int main(){
  int i = 1;
  ll n, b;
  while(scanf("%lld %lld", &n, &b) and n and b){
    printf("Case %d: %lld %lld %lld\n", i++, n, b, fe(n, b));
  }

}
