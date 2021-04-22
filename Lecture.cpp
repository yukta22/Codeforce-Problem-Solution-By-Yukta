
	int n , m;
	cin>>n>>m;
	string a,b;
	string x,y;
	unordered_map<string,string> mpp;

	for(int i = 0 ; i < m ; i++){
		cin>>a>>b;
		mpp[a]=b;
		
	}

	for(int i = 0 ; i < n ; i++){
		cin>>x;
		y=mpp[x];
		if(x.length() > y.length()){
			cout<<y<<" ";
		}
		else{
			cout<<x<<" ";
		}
	}
