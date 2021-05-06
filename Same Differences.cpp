
void solve() {

	lli n;
	cin >> n;

	int a[n];
	unordered_map<lli,lli> mpp;
	lli ans=0;

	for(lli i = 0 ; i < n ; i ++){
		cin>>a[i];
		mpp[a[i] - i]++;
	}

	for(auto x : mpp){
		lli z =x.second;
		ans += (z*(z-1))/2;
	}

	cout<<ans<<endl;

}
