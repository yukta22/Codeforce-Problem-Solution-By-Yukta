//https://codeforces.com/contest/1593/problem/A

void solve(){
 
	lli a,b,c;
	cin>>a>>b>>c;
 
	lli maxi = max(a,max(b,c));
	// cout<<maxi<<" ";
 
	if(a == 0 && b == 0 && c == 0){
		cout<<1<<" "<<1<<" "<<1<<endl;
		return;
	} 
 
	if(a == maxi && b == maxi){
		lli y = (a+1)-c;
		cout<<1<<" "<<1<<" "<<y<<endl;
		return;
	}
 
	if(a == maxi && c == maxi){
		lli y = (a+1)-b;
		cout<<1<<" "<<y<<" "<<1<<endl;
		return;
	}
 
	if(b == maxi && c == maxi){
		lli y = (b+1)-a;
		cout<<y<<" "<<1<<" "<<1<<endl;
		return;
	}
 
	
	if(a == maxi){
		lli x = (a+1)-b;
		lli y = (a+1)-c;
		cout<<0<<" "<<x<<" "<<y<<endl;
	}
	if(b == maxi){
		lli x = (b+1)-a;
		lli y = (b+1)-c;
		cout<<x<<" "<<0<<" "<<y<<endl;
	}
	if(c == maxi){
		lli x = (c+1)-a;
		lli y = (c+1)-b;
		cout<<x<<" "<<y<<" "<<0<<endl;
	}
  
}
