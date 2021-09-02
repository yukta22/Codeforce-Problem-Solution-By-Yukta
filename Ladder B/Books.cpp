//https://codeforces.com/problemset/problem/279/B

void solve() {

	int ans = 0;
	int n,t;
	cin>>n>>t;
	int arr[n+1];

	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}

	int temp = 0;
	int sum = 0;
	for(int i = 0 ; i < n ; i++){
		if(sum + arr[i] > t){
			while(temp < i && sum + arr[i] > t){
				sum -= arr[temp];
				temp++;
			}
		}
		sum += arr[i];
		if(sum <= t){
			ans=max(ans,i-temp+1);
		}
	}

	cout<<ans<<endl;
	
}
