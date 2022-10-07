#include<bits/stdc++.h>
using namespace std;

int b;
long long int n;
int v[10000000] = {0};
int fib(int N) {
  if(N == 1 or N == 0) return 1;
  if(v[N] != 0) return v[N];
  
  return v[N];
}
int main() {
  int i = 1;
  while(scanf("%lld %d", &n, &b) and n and b){
    printf("Case %d: %lld %d %d\n", i++, n, b, fib(n));
  }
}
// todo: clean buffer
