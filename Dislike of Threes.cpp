//https://codeforces.com/contest/1560/problem/A

void solve(){
    lli n;
    cin >> n;
    vector<int> a;
    
    for(lli i = 1 ; i <= 10000 ; i++){
    	int digit= i%10;
        if(i % 3 != 0 && digit != 3){
        	a.push_back(i);        	
        }
    }
    cout<<a[n-1]<<endl;   
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

