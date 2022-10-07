#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct Matrix{
  ll mat[2][2];
};

Matrix matrixMul(Matrix a, Matrix b, ll m){
  Matrix ans;
  int i, j, k;
  for(i = 0; i < 2; i++)
    for(j = 0; j < 2; j++)
      for(ans.mat[i][j] = k = 0; k < 2; k++)
        ans.mat[i][j] += (a.mat[i][k]*b.mat[k][j])%m;
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
int main(){
  Matrix a, c;
  ll n, b;
  a.mat[0][0] = a.mat[0][1] = a.mat[1][0] = 1;
  c.mat[0][0] = c.mat[0][1] = c.mat[1][0] = 1;
  a.mat[1][1] = 0;
  c.mat[1][1] = 0;
  
  while(cin >> n >> b and n and b){
    cout << ((2*matrixPow(a, n, b))-1)%b<< endl;
  }
  return 0;
}

