void solve() {
	int n;
    cin >> n;
    string s;
    cin>>s;
    int a;
    map<char,int> mpp;
	for (int i = 0; i < n; i++) {
	    if(mpp.find(s[i]) != mpp.end()){
	    	if(mpp[s[i]] != i - 1){
	    		cout<<"NO"<<endl;
	    		return;
	    	}
	    }
	    mpp[s[i]] = i;
	}
	cout<<"YES"<<endl;
}
