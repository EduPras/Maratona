#include <iostream>
#include<deque>

using namespace std;
deque<int> v;
int C, n;
typedef long long int ll;
ll tab[200001][2];

ll fn(int N, bool ac){
  ll resultado;
  if(N >= n) return 0;
  if(tab[N][ac] != -1) return tab[N][ac];
  // has actions
  if(ac){
    // sell or 
    // keep with action
    resultado = max(fn(N+1, false)+v[N], fn(N+1, true));
  }
  // doesn't have actions
  else {
    // dont buy 
    // buy action
    resultado = max(fn(N+1, false), fn(N+1, true) - (v[N]+C));
  }
  return tab[N][ac] = resultado;
}

int main(){
  int D, aux;
  scanf("%d %d", &n, &C);
  for(int i = 0; i < n; i++){
    tab[i][0] = -1; tab[i][1] = -1;
  }
  for(int i = 0; i < n; i++){
    cin >> aux;
    v.push_back(aux);  
  }

  cout << fn(0, false) << endl;
  
}
