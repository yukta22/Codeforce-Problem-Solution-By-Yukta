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

    int s, n;
    cin>>s>>n;
    int flag = 0;
    pii p[1000];
    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }

    sort(p, p + n);
    for (int i = 0; i < n; i++) {
        if (s <= p[i].first) {
            flag = 1;
            break;
        } else {
            s += p[i].second;
        }
    }
    if (flag == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}
