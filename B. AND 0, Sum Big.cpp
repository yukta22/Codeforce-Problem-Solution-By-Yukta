	int test;
	cin >> test;
	while (test--) {

		int n,k;
		cin>>n>>k;

		lli ans = 1;

		for (int i = 0; i < k; i++)
		{
			ans = (ans * n)%mod;
		}

		cout<<ans<<endl;

	}
