#include<bits/stdc++.h>
#include<iostream>
#define ll long long int
using namespace std;
 
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
 
	int n;
	cin>>n;
	
	int x,y,z;
 
	int xsum = 0 , ysum = 0 , zsum = 0;
 
	while(n--){
		cin>>x>>y>>z;
 
		xsum += x;
		ysum += y;
		zsum += z;
 
	}
 
	if(xsum == 0 && ysum == 0 && zsum == 0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
 
	
	return 0;
}
