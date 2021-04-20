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
const int MAX_CHAR = 26;
using namespace std;

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    int n;
    cin>>n;

    int a[n];
    int ch = 0 , bi = 0 , ba =0;

    for(int i = 1 ; i <= n ; i++){
    	cin>>a[i];
    	if(i % 3 == 1 ){
    		ch+= a[i];
    	}
		if(i % 3 == 2 ){
    		bi+= a[i];
    	}
    	if(i % 3 == 0 ){
    		ba+= a[i];
    	}
    }

    if(ch > bi && ch > ba){
    	cout<<"chest"<<endl;
    }
    else if(bi > ch && bi > ba){
    	cout<<"biceps"<<endl;
    }
    else if(ba > bi && ba > ch){
    	cout<<"back"<<endl;
    }

    return 0;
}
