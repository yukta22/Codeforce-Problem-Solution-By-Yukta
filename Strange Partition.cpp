
void solve() {
   
    lli n,x;
    cin >> n >> x;
    lli sum = 0;
    lli ans = 0 ;
    for(int i = 0 ; i < n ; i++){
    	lli y;
    	cin>>y;
    	sum += y;
    	ans += (y/x);
    	if(y%x != 0) {
    		ans++;
    	}
    }
    lli count = sum / x;
    if(sum%x) count++;
    cout<<count<<" "<<ans<<endl;
}
