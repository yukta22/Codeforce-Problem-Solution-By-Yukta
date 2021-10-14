void solve(){
   
 
   string str;
   
   cin >> str;
 
      lli count = str.size();
   
      lli n = str.size();
 
      for(lli i = n; i >= 0; i--){
 
        if(str[i]=='5'){
 
            for(lli j = i-1; j >= 0;j--){
 
                if(str[j]=='2' || str[j] == '7'){
 
                    count = min(count , n- j-2);
                }
            }
        }
        
        if(str[i] == '0'){
 
            for(lli j = i-1; j >= 0; j--){
 
                if(str[j]=='0' || str[j] == '5'){
 
                    count = min(count , n-j-2);
                }
            }
        }
      }
 
      cout << count <<endl;
}
