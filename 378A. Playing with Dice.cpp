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

bool palindrome(const string &s) {
    int n = s.length();
    for(int i = 0; i < n; i++) {
        if(s[i] != s[n - i - 1]) return false;
    }
    return true;
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    int a,b;
    cin>>a>>b;

    int first=0 , second=0 , draw=0;

    for(int i = 1 ; i <= 6 ; i++){
        if(abs(i - a) < abs( i - b)){
            first++;
        }
        else if(abs(i - a) > abs( i - b)){
            second++;
        }
        else{
            draw++;
        }
    }


    cout<<first<<" "<<draw<<" "<<second;


    return 0;
}
