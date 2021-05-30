#include<iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;



int main()
{
    ll n ,sum=0 ;
    cin>>n;
    sum = n*(n+1)/2;
    if (sum %2 == 0 )
    {
     // write logic  
     cout<<"YES"<<endl;
     
     if(n%2 == 0 )
     {
        // Total ele in pair 
        cout<<n/2<<endl;
        
        for(ll i=1 ; i<=n/4 ; ++i )
        {
            cout<<i<<" ";
        }
        for(ll j=n ; j>(3*n)/4 ; j--){
            cout<<j<<" ";            
        }
        cout<<endl<<n/2<<endl;
        for(ll k= (3*n)/4 ; k>n/4 ;k--){
            cout<<k<<" ";            
        }
        
     }
     
     else{
         ll s1,s2,s3,s4,x=0 ; 
         s1 = 1; 
         s2 = ((n+1)/4) - 1;
         s3 = (n+1)/4 ; 
         s4= n;
         //no of ele in one set  
         cout<<(n-1)/2<<endl; 
         
         for(ll i = s1 ; i<=s2 ; i++){
             cout<<i<<" ";
         }
         
         while(x<s3){
             cout<<s4-x<<" ";
             x++;
            }
         cout<<endl<<(n+1)/2<<endl;
         for(ll i =  1  ; i<=(n+1)/2 ; i++){
            cout<<s2+i<<" ";
             
             }
         
        }   
     
     
    }
    
    else{
        cout<<"NO"<<endl; 
    }


    return 0;
}
