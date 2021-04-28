void solve() {
	int n;
	cin>>n;
	int a[n];
	int temp = 0 , count = 0;

	for(int i = 0 ; i < n ; i ++){
		cin>>a[i];
	}

	for(int i = 0 ; i < n ; i ++){
		count += abs(a[i] - temp)+2;
		temp=a[i];
	}	

	cout<<count-1<<endl;

}
