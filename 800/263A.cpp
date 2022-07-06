#include <bits/stdc++.h>

using namespace std;

int main(){
  int a=0,b=1,c,x = 5, y=25;
  while(y--){
    cin >> c;
    a++;
    if(c == 1){
      cout << abs(a-3) + abs(b-3) << endl;
      return 0;
    }
    if(a % 5 == 0){
      a = 0;
      b++;
    }
  }



}
