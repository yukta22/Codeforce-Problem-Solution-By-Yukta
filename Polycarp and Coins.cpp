void solve(){
    long double n; 
    cin >> n;
 
    long double c = 0;
    c = n / 3;
    // cout<<c<<" ";
 
    int c1 = floor(c);
    int c2 = ceil(c);
 
    // cout<<c1<<" "<<c2<<" ";
 
    if(2*c2 + c1 == n){        
        cout<<c1<<" "<<c2<<endl;
        return;
    }
 
    cout<<c2<<" "<<c1<<endl;
 
}
