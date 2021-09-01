//https://codeforces.com/problemset/problem/432/B

void solve() {

	int n;
	cin>>n;
	map<int,int> hm;	
	int a[n+10][2];

	for(int i = 0 ; i < n ;i++){
		cin>>a[i][0]>>a[i][1];
		hm[a[i][0]]++;
	}

	int match = 2 * (n-1);
	for(int i = 0 ; i < n ;i++){
		int hm_dress = (n-1) + hm[a[i][1]];
		int away_dress = match - hm_dress;
		cout<<hm_dress<<" "<<away_dress<<endl;

	}

    
}
