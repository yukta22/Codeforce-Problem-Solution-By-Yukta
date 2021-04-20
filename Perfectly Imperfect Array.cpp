	int test;
	cin >> test;
	while (test--) {
 
		int n;
		cin >> n;
		int a[n];
		long long int mul = 1;
 
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
			mul *= a[i];
		}
 
		int flag = 1;
		for (int i = 0; i < n; ++i){
			long double ans = sqrt(a[i]);
        
	        if(int(ans) != ans){
	            flag = 0;
        	}
		}
 
		if(flag == 0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
