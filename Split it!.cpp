#include<bits/stdc++.h>
#include<iostream>
#define lli               long long int
using namespace std;


signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	int t;
	cin>>t;
	while(t--){

		int n , k;
		cin>>n>>k;
		string s;
		cin>>s;

		if(2*k+1 > n){
			cout<<"NO"<<endl;
			continue;
		}

		string a = "" , b = "";

		for(int i = 0 ; i < k ; i++){
			a += s[i];
		}

		for(int i = n-1 ; i >= n-k ; i--){
			b += s[i];
		}

		if(a==b){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}


	}
	return 0;
}
