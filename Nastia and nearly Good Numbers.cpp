void solve() {
	lli a,b;
	cin>>a>>b;
    if(b>2){
        cout<<"YES"<<endl;
        cout<<(b-1)*a<<" "<<a<<" "<<a*b<<endl;
    }
    else if(b==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<a<<" "<<3*a<<" "<<4*a<<endl;
    }
}
