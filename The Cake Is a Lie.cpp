#include <bits/stdc++.h>
using namespace std;
int main () {
  int t;
  cin>>t;
  while (t--) {
    int n,m,k;
    cin>>n>>m>>k;
    cout<<((m-1)+(n-1)*(m)==k ? "YES\n" : "NO\n");
  }
}
