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
const int MAX_CHAR = 26;
using namespace std;

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

   int test;
   cin>>test;
   while(test--){
		int n;
		cin>>n;
		int a[n];
		vector<int> odd,even;
		for(int i =0 ; i < n;i++){
			cin>>a[i];
			if (a[i] & 1) {
				odd.pb(a[i]);
			}
			else {
				even.pb(a[i]);
			}
		}

		for (auto i : odd) {
			cout << i << " ";
		}
		for (auto i : even){
			cout << i << " ";
		}
		cout <<endl;

   }

    return 0;
}
