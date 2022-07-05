#include <bits/stdc++.h>

using namespace std;

int main(){
  int a,b=0;
  char c,d,e;
  cin >> a;
 while(a--){
  cin >> c >> d >> e;
  if(c + d+ e == 174){b++;};
  if(c + d+ e == 178){b--;};
}
cout << b;
}
