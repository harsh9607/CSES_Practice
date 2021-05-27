#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n ;
    cin>>n;
    if (n==1){
        cout<<"1";
    }
    
    else if (n==3 or n==2){
        cout<<"NO SOLUTION";
    }    
    
    else
    {
        
     if(n%2==0)
     {
        long long  a = 2;
        while(a<=n){
            cout<<a<<" ";
            a+=2;
        }
        a=1;
        while(a<=n-1){
            cout<<a<<" ";
            a+=2;
        }
     } 
        // here
       else
        {
        long long  a = 1;
        while(a<=n){
            cout<<a<<" ";
            a+=2;
        }
        a=2;
        while(a<=n-1){
            cout<<a<<" ";
            a+=2;
        }
        
     }
        
        
    }
 
    return 0;
}
