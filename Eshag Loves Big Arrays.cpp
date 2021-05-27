void solve() {
   
    lli n;
    cin >> n;
 
    int a[n];
    rep(i,0,n){
        cin >> a[i];
      
    }
    
    sort(a,a+n);
    int k = 0; 
    for(int i = 0 ; i < n ; i++){
        if(a[i] == a[i+1]){
           k++;
        }
        if(a[i] != a[i+1]){
            break;
        }
    }
    k+=1;
 
    if(k == n){
        cout << 0 << "\n";
        return;
    }
 
    int count = 0;
    for(int j = k ; j < n ; j++){
        count++;
    }
 
 
    cout << count <<"\n";
}
