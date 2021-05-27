
void solve() {
	lli w,h,n;
	cin>>w>>h>>n;
	int count = 1;


	if(n == 1){
		cout<<"YES"<<endl;
		return;
	}

	else if(w % 2 != 0 && h % 2 != 0){
		cout<<"NO"<<endl;
		return;
	}
	
	else{

		while(w % 2 == 0 || h % 2 == 0){
			if(w % 2 == 0 ) {
				w = w/2;
				count*= 2;
			}

			if(h % 2 == 0 ) {
				h = h/2;
				count*= 2;
			}
		
		}

		// cout<<count<<" ";
		if( count >= n){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}
}
