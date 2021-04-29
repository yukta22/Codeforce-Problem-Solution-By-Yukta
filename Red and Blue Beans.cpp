#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t; cin>>t;
  while(t--){
    int r, b, d;
    cin>>r>>b>>d;
    if(b<r) swap(r,b);
    cout<<((b+d)/(d+1)<=r?"YES":"NO");
  }
}
