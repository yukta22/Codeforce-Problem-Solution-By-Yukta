#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

   int n , m;
   cin >> n >> m;

   lli ans = 0;
   int loc = 1;
   
   while(m--){
      
      int now;
      cin >> now;

      if(now >= loc){
        ans += (now - loc);
      }
      else{
        ans += n - (loc - now);
      }
      
      loc = now;

   }

   cout << ans <<"\n";



    return 0;
}
