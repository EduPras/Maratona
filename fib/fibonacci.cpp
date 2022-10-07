
// C++ Program to find n'th fibonacci Number
#include<iostream>
#include<cmath>
using namespace std; 

int fib(int n) {
  double phi = (1 + sqrt(5)) / 2;
  return round(pow(phi, n) / sqrt(5));
}
 
// Driver Code
int main ()
{
  int n, b;
  while(cin >> n >> b and (n+b)){
    cout << 2*fib(n)-1 << std::endl;
  }
}
//This code is contributed by Lokesh Mohanty.
