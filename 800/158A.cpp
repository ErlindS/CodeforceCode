#include <bits/stdc++.h>

using namespace std;

int main(){
  int x,y,z,m= 1,n = 0;
  int a[105];
  cin >> x >> y;
  z=y;
  for(int i = 1; i < x+1;i++){
    cin >> a[i];
  }
  if(a[y] == 0){
    for(int i = 1; i < y+1;i++){
      if(a[i] != 0){
        n++;
      }
    }
    cout << n;
    return 0;
  }
  while(a[z] == a[z +m] && a[z] != 0){
    y++;
    m++;
  }
  cout << y;
}
