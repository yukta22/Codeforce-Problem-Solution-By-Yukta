
	int t;
	cin >> t;
	while (t--) {
		int n,k;
		cin >> n>>k;
		int a[n];

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		int mini;
		int i = 0 , j = n-1;

		while(i<j){
			if(k==0)
         		break;
			mini = min(a[i],k);
			a[i] = a[i]-mini;
			a[j] = a[j]+mini;

			k-=mini;
     		i++;
		}


    for(auto it:a)
        cout<<it<<" ";
    cout<<endl;
	}
