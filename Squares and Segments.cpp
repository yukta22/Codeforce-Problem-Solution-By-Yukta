void solve() {
	lli n;
    cin >> n;
    lli ans;
    int a, b;
    a= ceil(sqrt(n));
    b = floor(sqrt(n));
    if(a*b >= n)
    {
        ans = a+b;
    }
    else
    {
        ans = a+b+1;
    }
    cout << ans << endl;

}
