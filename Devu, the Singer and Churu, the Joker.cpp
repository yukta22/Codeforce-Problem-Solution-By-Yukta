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

    int n , d;
    cin>>n>>d;
    int t[n];
    int sum = 0 ;

    for(int i = 0 ; i  < n ; i ++){
        cin>>t[i];
        sum+=t[i];
    }

    if((n-1)*10+sum > d)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<(d-sum)/5;
    }
    


    return 0;
}
