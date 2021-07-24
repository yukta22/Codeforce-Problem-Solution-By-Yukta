void solve(){
     
    int n,m;
    cin>>n>>m;
    int a[m];
    set<int> st;

    for(int i = 0 ; i < m ; i++){
    	cin>>a[i];
    	st.insert(a[i]);
    }

    sort(a,a+m);

    if(a[0] == 1 || a[m-1] == n){
    	cout<<"NO"<<endl;
    	return;
    }
    else{
    	int count = 0;

    	for(int i = 0 ; i < m ; i++){
    		if(st.find(a[i] +1) != st.end()){
    			count++;
    		}

    		if(st.find(a[i] +2) != st.end()){
    			count++;
    		}

    		if(count == 2){
    			cout<<"NO"<<endl;
    			return;
    		}
    		count = 0;	
    	}

    }
    cout<<"YES"<<endl;

}
