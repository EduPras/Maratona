#include<iostream>
#include<vector>

using namespace std;

vector<int> frases;
vector<int> desculpas;
int fn(int n, int C){
  if(n == 0 or C <= 0) return 0;
  else if(frases[n] > C) return fn(n-1, C);
  else{
    int r1 = fn(n-1, C);
    int r2 = desculpas[n] + fn(n-1, C-frases[n]);
    return max(r1, r2);
  }


}
int main(){
  int C, F, N, D;
  frases.push_back(0);
  desculpas.push_back(0);

  while(scanf("%d %d", &C, &F) and C and F){
    for(int i = F; i > 0; i--){
        scanf("%d %d", &N, &D);
        frases.push_back(N);
        desculpas.push_back(D);
    }
    cout << fn(F, C) << endl;
    frases.clear(); frases.push_back(0);
    desculpas.clear(); desculpas.push_back(0);
  }
  return 0;
}
