#include<bits/stdc++.h>
#include<iostream>
#define ll long long 
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
using namespace std;


signed main(){
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	 int n , m ;
	 cin>>n>>m;
	 int minimum = INT_MAX;

	 int f[m];

	 rep(i,0,m){
	 	cin>>f[i];
	 }

	 sort(f,f+m);

	 for(int i=n;i<=m;i++){
	 	minimum=min(minimum,abs(f[i-1]-f[i-n]));
	 }

	 cout<<minimum<<endl;
     return 0;
}
