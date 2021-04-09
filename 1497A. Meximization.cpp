#include<bits/stdc++.h>
#include<iostream>
#include<queue>
#define lli               long long int
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
 
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
 
	int t;
	cin >> t;
	while (t--) {
 
		int n;
		cin >> n;
		int a[n];
		unordered_map<int, int> mp;
		vector<int> v1,v2;
		queue<int> q1,q2;
		int sum = 0;
 
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
 
		sort(a, a + n);
 
		for (int i = 0; i < n; i++)
		{
			v1.push_back(a[i]);
			if(a[i] == a[i+1]){
				//int v = v1.front();
				v1.pop_back();
				v2.push_back(a[i+1]);
			}
 
			
		}
 
		for(int i = 0 ; i < v1.size() ; i++){
 
			cout<<v1[i]<<" ";
 
		}
		for(int i = 0 ; i < v2.size() ; i++){
 
			cout<<v2[i]<<" ";
 
		}
 
 
		cout<<endl;
 
	}
	return 0;
