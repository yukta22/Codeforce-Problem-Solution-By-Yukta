	int n ,l ;
	cin>>n>>l;
	int a[n];

	for (int i = 0; i < n; ++i){
		cin>>a[i];	
	}

	sort(a,a+n);
	int maxi = 0;

	for (int i = 0; i < n-1; ++i)
	{
		if(a[i+1]-a[i] > maxi){
			maxi = a[i+1]-a[i];
		}
	}
	
	double x = maxi / 2.0;
	double y = a[0]-0.0;
	double z = (double)l-a[n-1];

	double ans = max(x,max(y,z));

	cout << fixed;
 	cout << setprecision(10);

 	cout<<ans<<endl;
