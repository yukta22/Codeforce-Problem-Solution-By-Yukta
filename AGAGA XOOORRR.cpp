
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		int xor_sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			xor_sum ^= arr[i];
		}
		if (xor_sum == 0) {
			cout << "YES" << endl;
		} else {
			int index1 = 0;
			int index2 = n - 1;
			int p = 0;
			int q = 0;
			while (index1 < n) {
				p ^= arr[index1];
				if (p == xor_sum)
					break;
				index1++;
			}
			while (index2 >= 0) {
				q ^= arr[index2];
				if (q == xor_sum)
					break;
				index2--;
			}
			if (index1 < index2 - 1) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	}
