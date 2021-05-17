
int gcd(lli a, lli b){

    if(b == 0){
        return a;
    }

    gcd(b,a%b);
}

void solve() {
	lli k;
	cin>>k;

	int gd = gcd(k,100-k);

	int a = k/gd;
	int b = (100-k)/gd;

	int ans = a+b;

	cout<<ans<<endl;
}
