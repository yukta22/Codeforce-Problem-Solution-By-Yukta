
void solve() {
	int w, h;
	int u1, d1, u2, d2;

	cin >> w >> h;
	cin >> u1 >> d1;
	cin >> u2 >> d2;
	int sum = w;

	for (int i = h ; i >= 1 ; i--) {

		sum += i;
		if(i == d1){
			sum -= u1;
			if(sum < 0){
				sum =0;
			}
		}

		if(i == d2){
			sum -= u2;
			if(sum < 0){
				sum =0;
			}
		}

	}
	cout<<sum<<endl;

}


