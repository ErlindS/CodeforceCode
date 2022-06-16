#include <bits/stdc++.h>

using namespace std;

int main(){
  int x,y,z,a,b,c;
  cin >> a;
  while(a--){
  cin >> x >> y >> z;
  z = z - y;
  b =  z / x;
  cout << b * x + y << endl;


  }
}
