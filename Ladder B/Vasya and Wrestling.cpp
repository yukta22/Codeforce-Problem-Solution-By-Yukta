//https://codeforces.com/problemset/problem/493/B

void solve() {

	lli n;
	cin>>n;
	vector<lli> a1,a2;
	lli sum1 = 0;
	lli sum2 = 0;

	bool last = true;
	for(int i = 0 ; i < n ; i++){
		int x;cin>>x;
		if(x>=0){
			a1.push_back(x);
			sum1+=x;
			last = true;
		}
		else{
			x*=-1;
			a2.push_back(x);
			sum2+=x;
			last = false;
		}
	}

	if(sum1 > sum2){
		cout<<"first"<<endl;
	}
	else if(sum2 > sum1){
		cout<<"second"<<endl;
	}
	else{
		if(a1>a2){
			cout<<"first"<<endl;
		}
		else if(a2>a1){
			cout<<"second"<<endl;
		}
		else{
			if(last){
				cout<<"first"<<endl;
			}
			else{
				cout<<"second"<<endl;
			}
		}
	}


}


