#include<bits/stdc++.h>
#include<iostream>
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
 
	string s;
	 getline(cin,s);
 
	int count=0;
	unordered_map<char,int> mpp;
 
	for(int i = 0 ; i < s.length() ; i++){
 
		if(s[i] >= 'a' && s[i] <= 'z'){
			mpp[s[i]] = 0;
		}
 
	}
 
	for(int i = 0 ; i < s.length() ; i++){
 
		if(s[i] >= 'a' && s[i] <= 'z'){
			if(mpp[s[i]] == 0){
				count++;
			}
 
			mpp[s[i]]++;
		}
 
	}
 
	cout<<count<<endl;
 
	return 0;
}
