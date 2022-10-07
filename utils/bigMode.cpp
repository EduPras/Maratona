#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
struct Matrix {
  ll mat[2][2];
};

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

// Matrix exponencial
Matrix matrixMul(Matrix a, Matrix b, ll m){
  Matrix ans;
  int i, j, k;
  for(i = 0; i < 2; i++)
    for(j = 0; j < 2; j++)
      for(ans.mat[i][j] = k = 0; k < 2; k++)
        ans.mat[i][j] += (a.mat[i][k]*b.mat[k][j]);
  return ans;
}


ll matrixPow(Matrix base, ll p, ll m){
  Matrix ans;
  for(int i = 0; i < 2; i++)
    for(int j = 0; j < 2; j++)
      ans.mat[i][j] = (i==j);
  while(p > 0){
    if(p & 1)
      ans = matrixMul(ans, base, m);
    base = matrixMul(base, base, m);
    p = p >>1;
  }
  return ans.mat[0][0];
}


