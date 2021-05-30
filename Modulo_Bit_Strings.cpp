#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll ;
 
 
 
int main()
{
    ll n,ans=1,m =1000000007 ; 
    cin>>n;
    
    for(ll i=0 ; i<n ;i++){
        ans = ans*2 % m ;      
    }
    cout<<ans; 
    
 
 
    return 0;
}
