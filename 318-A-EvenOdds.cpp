#include<bits/stdc++.h>
#include<iostream>
#define lli               long long int
using namespace std;


signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
  long long n,k;
  cin>>n>>k;
  
  if(k <= (n+1)/2){
    cout<< k*2-1 <<endl;
  }
  else{
    cout<< (k- (n+1) / 2) * 2 <<endl;
  }



	return 0;
}
