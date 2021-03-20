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
		
		string s;
		cin>>s;

		int flag = 0;

		if(is_sorted(s.begin(),s.end())){
			cout<<"YES"<<endl;
		}

		else{

			int y = 0;
			for(int i = s.length()-1 ; i > 0;i--){

				if(s[i] == '0' && s[i-1] == '0'){
					y = i - 1;
					flag=1;
					break;
				}
			}

			if(flag == 0){
				cout<<"YES"<<endl;
				continue;
			}

			int flag2 = 0;

			for(int i = y ; i > 0 ; i--){
				if(s[i] == '1' && s[i-1] == '1'){
					flag2 = 1;
					break;
				}
			}

			if(flag2 == 0){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}


		}

	}
	return 0;
}
