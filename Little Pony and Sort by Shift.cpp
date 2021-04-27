void solve() {
	lli n;
	cin >> n;
	lli a[n];
	lli count = 0 , temp = 0;

	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for (int i = 2; i <= n; i++) {
		if (a[i - 1] > a[i]) {
			count++;
			temp = i;
		}
		if (count >= 2)
			break;
	}
	if (count == 1 && a[1] >= a[n])
		cout << n - temp + 1 << endl;
	else if (count == 0) 
		cout << 0 << endl;
	else
		cout << -1 << endl;

}
