void solve(){
     
     string s;
     cin >> s;
     vector<int>f(26,0);
     
     int n = s.size();
 
     for(int i = 0 ; i < n ; i++){
        f[s[i] - 'a']++;
      }
     
      int no_col = 0;
 
      for(int i = 0 ; i < 26 ; i++){
         if(f[i] > 2){
            no_col += (f[i] - 2);
         }
      }
 
      int ans = n - no_col;
      cout << ans / 2 <<"\n";   
}
