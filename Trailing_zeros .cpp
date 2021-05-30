// factorial trailing zeros
// even if you prime factored the number to count no of 5 , it still runs out hence watch the concept video if needed. 
// concept = https://www.youtube.com/watch?v=fx8rUY_iIms
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;



int no_of_zeros(ll n){
    
    ll ans = 0 , p=5 ;
    
    while(n/p > 0 ){
        ans += int(n/p); 
        p *= 5 ; 
    }
 return ans;   
}


int main()
{
    ll n ,ans=0  ; 
    cin >> n ; 
    ans = no_of_zeros(n); 
    
    
   cout<<ans;  
    
    return 0;
}
