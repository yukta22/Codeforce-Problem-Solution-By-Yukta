void solve() {
 
    int  n , s ,t;
    cin >> n >> s >> t;
    int p[n];

    for(int i = 1 ; i <= n ; i ++){
    	cin>>p[i];
    }

    int count = 0;
    while(s!=t && p[s] != 0){
    	int temp = p[s];
    	p[s] = 0;
    	s =temp;
    	count += 1;
    } 

    if(s==t){
    	cout<<count<<endl;
    }
    else{
    	cout<<-1<<endl;
    }
 
    
}
