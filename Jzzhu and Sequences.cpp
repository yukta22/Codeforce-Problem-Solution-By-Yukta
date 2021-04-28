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
#define limit             1000000
using namespace std;
const int MAX_CHAR = 26;
const long long MOD = 1e9 + 7;

// int gcd(lli a, lli b){

//     if(b == 0){
//         return a;
//     }

//     gcd(b,a%b);
// }

// int count_digit(int number) {
// 	return int(log10(number) + 1);
// }


void solve() {
	lli x,y,n;
    lli arr[6];
    cin>>x>>y;
    cin>>n;
    arr[0]=(x+MOD)%MOD;
    arr[1]=(y+MOD)%MOD;
    arr[2]=((y-x)+MOD)%MOD;
    arr[3]=(-x+MOD)%MOD;
    arr[4]=(-y+MOD)%MOD;
    arr[5]=((x-y)+MOD)%MOD;
    n=(n-1)%6;
    cout<<((arr[n]+MOD)%MOD)<<endl;


}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {

		solve();
	}

	return 0;

}

