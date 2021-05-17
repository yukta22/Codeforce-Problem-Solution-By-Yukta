void solve() {
	lli n;
	cin>>n;

	lli a[n+1];
	lli count = 0;

	for(lli i = 0 ; i < n ; i ++){
		cin>>a[i];
	}

	for(lli i = 1 ; i <= n ; i ++){

		if(a[i-1] != i){
			count++;
		}
	}
	// cout<<count<<" ";
	if(count == 0){
		cout<<0<<endl;
	}
	else if(a[0] == 1 || a[n-1] == n){
		cout<<1<<endl;
	}
	else if(a[0] == n && a[n-1] == 1){
		cout<<3<<endl;
	}
	else if(a[0] != 1 && a[n-1] != n){
		cout<<2<<endl;
	}


}
