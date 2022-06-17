#include <bits/stdc++.h>

using namespace std;

int main(){
  int a,b,c,x,y,z;
  int m[35],n[35];
  cin >> x;
      cin >> y >> z;
  for(int i =0;i<x;i++){
    for(int j=0;j<y;j++){
       cin >> m[j];
    }
    for(int j=0;j<y;j++){
       cin >> n[j];
    }

  }
  sort(m, m+x);
  sort(n, n+x);
  for(int i=0;i<x;i++){
    cout << m[i] << endl << n[i] << endl;
    }
}
