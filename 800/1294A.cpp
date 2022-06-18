#include <bits/stdc++.h>

using namespace std;

int main(){
  int x,a,b,c,d;
  cin >> x;
  while(x--){
    cin >> a >> b >> c >> d;
    d = d - (a - c) - (a - b);
    if(d<0){ cout << "NO"; return 0;}
    if(d==0 && a == b && a == c ){ cout << "YES"; return 0;}
    d%3==0?cout << "YES" << endl:cout << "NO"<< endl;


  }



}
