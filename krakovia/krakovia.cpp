#include<bits/stdc++.h>
using namespace std;
#define logarr(arr,a,b) for(int i=(a); i < (b); a++) cout << (arr[a]) << endl;
typedef unsigned long long int ll;


vector<int> bi(string s){
  int x = s.size(), a = 0;
  vector<int> arr;
  while(a<=x){
    arr.emplace_back(s[a]-'0');
    a++;
  }
      for(int i = 0; i < 0; i++)
        cout << arr[i];
  return arr;
}
int main(){
  ll n, f, sum = 0;
  string auxS;
  int i = 0;
  vector<int> auxI;
  while(cin >> n >> f and n and f){
    i ++;
    while(n--){
      cin >> auxS;
      cout << auxS << endl;
      auxI = bi(auxS);
      for(int i = 0; i < 0; i++)
        cout << auxI[i];
    }
    printf("Bill #%d costs %lld: each friend should pay %lld\n\n", i, sum, (ll)trunc(sum/f) );
    sum = 0;
  }
  
}
