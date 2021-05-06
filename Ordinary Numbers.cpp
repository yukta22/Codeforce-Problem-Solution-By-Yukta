void solve() {

	lli n;
	cin>>n;

	lli count = 0;

	for(lli i =  1 ; i <= 9  ; i++){
		for(lli j  = i ; j <= n;){
				count++;
				j = (j*10)+i;
		}
	}
	
	cout<<count<<endl;

}
