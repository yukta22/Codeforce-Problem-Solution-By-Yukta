	int test;
	cin >> test;
	while (test--) {
		int n ;
		cin >> n;
 
		string s;
		cin >> s;
 
		int count = 0 ,  t = 0 , m = 0;
 
		for (int i = 0 ; i < n ; i++) {
			if (s[i] == 'T') {
				t++;
			}
			if (s[i] == 'M') {
				m++;
			}
		}
 
		if (t != 2 * m) {
			cout << "NO" << endl;
		}
		else {
			int flag = 0 ;
			for (int i = 0 ; i < n ; i++) {
				if (s[i] == 'T')
					count++;
				else {
					count--;
					if (count < 0) {
						flag = 1;
						break;
					}
				}
			}
			if(flag){
				cout<<"NO"<<endl;
			}
			else{
				reverse(s.begin(),s.end());
				int flag = 0;
				int count = 0;
 
				for (int i = 0 ; i < n ; i++) {
				if (s[i] == 'T')
					count++;
				else {
					count--;
					if (count < 0) {
						flag = 1;
						break;
					}
				}
			}
			if(flag){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
			}
 
 
		}
 
	}
