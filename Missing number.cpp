#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long x=0 ,sum=0, n  ;
    cin>>n;
 
 
 
    for(int i=0 ; i< (n-1) ; i++){
        cin>>x;
        sum += x ;
        }
 
 
 
    cout<<((n*(n+1))/2) - sum;
 
    return 0;
}
