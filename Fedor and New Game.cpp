
	int n,m,k,f;
	cin>>n>>m>>k;
	int a[n];
	int count=0;
	int xr;

	for(int i = 0 ; i < m ; i++){
		cin>>a[i];
	}
	cin>>f;

	for(int i = 0 ; i < m ; i++){
		xr = a[i]^f;
		if(__builtin_popcount(xr) <= k)
			count++;
	}

	cout<<count<<endl;
	
