	ll n , l , r , i;
	cin >> n;
	ll a[n];
	ll s[n];

	for (i = 0 ; i < n ; i++) {
		cin >> a[i];
		s[n] = a[n];
	}
	ll count = 0;
	ll seg = 0;
	sort(s, s + n);
	for (	i = 0; i < n; i++)
	{
		if (s[i] == a[i]) {
			count++;
		}

	}

	if (count == n) {
		cout << "yes" << "\n" << "1 1";
		return 0;
	}

	for (i = 0; i < n - 1, seg < 1; i++)
	{
		if (a[i] < a[i + 1]) {
			i++;
		}
		else {

			l = i;
			r = i;
			while (a[i + 1] < a[i] && i < n - 1) {
				i++;
				r++;
			}

			sort(a + l, a + r + 1);
			seg++;
		}

	}

	// for(i=0;i<n;i++)
 //            cout<<a[i]<<" ";

	for (i = 0; i < n; i++) {
		if (s[i] == a[i])
		{
			cout << "no";
			return 0;
		}
	}

	cout << "yes\n" << l + 1 << " " << r + 1;
