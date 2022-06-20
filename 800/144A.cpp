#include <bits/stdc++.h>

using namespace std;

int main(){
  int x,y = 1,z = 1,b,c;
  int a[105];
  cin >> x;
  cin >> a[1];
  c = a[1];
  b = a[1];
  for(int i = 2; i<x+1; i++) {
    cin >> a[i];
    if(a[i] > c){z= i; c = a[i];}
    if(a[i] <= b){y= i; b = a[i];}

  }
  if(z > y){cout << z-1 + x -y - 1; return 0;}
  cout << z-1 + x -y;



}
/* Better Solution
#include<bits/stdc++.h>
using namespace std;
int n,a,x,y=100,b,c;
main(){
cin>>n;
for(int i=0;i<n;i++){
    cin>>a;
    if(a>x)x=a,b=i;
    if(a<=y)y=a,c=i;
}
cout<<b+n-c-1-(c<b);
} */
