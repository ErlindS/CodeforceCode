#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  cout << 8+(x&1)<<" "<<x-8-(x&1)<< endl;
}
