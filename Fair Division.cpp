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


// lli prime[limit];
// void calculate_prime_flag(){
//     prime[0] = prime[1] = 1;
//     for(lli i = 2 ; i < limit ; i++){
//         if(prime[i] == 0){
//             for(lli j= i * i ; j < limit ; j += i){
//                 prime[j] = 1;
//             }
//         }
//     }
// }


// int perfect_sqr(long long x){

//     double y = sqrt(x);
//     if(y == int(y)){
//         return 1;
//     }else{
//         return 0;
//     }

// }

// bool isPerfectSquar(long double x){

//      if(x >= 0){

//           long long sr = sqrt(x);
//           return sr * sr == x;

//      }
//      return false;
// }


// int gcd(lli a, lli b){

//     if(b == 0){
//         return a;
//     }

//     gcd(b,a%b);
// }

void solve() {  
	int n;
    cin >> n;

    int sum = 0;
    int cnt[3] = {0};
    
    rep(i,0,n){
        int x;
        cin >> x;
        sum += x;
        cnt[x]++;        
    } 
    
    for(int i = 0 ; i < cnt[1]+1 ; i++){
        for(int j = 0 ; j < cnt[2]+1 ; j++){
            if((i*1 + j*2)*2 == sum){
                cout << "YES" <<"\n";
                return;
            } 
        }
    }
    cout << "NO" <<"\n";

}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	lli T;
	cin >> T;
	while (T--) {
		solve();
	}

	return 0;
}
