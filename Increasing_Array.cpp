// Incresing arrary CSES 
// Problem 4 

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n ; 
    long long current_max=0 , x , ans=0 ;
    
    cin >> n; 
 
    for(int i=0 ; i<n ; i++ )
    {   
        cin>>x;
        current_max  = max(x, current_max);
        ans += current_max - x; 
    }
    cout<<ans;
    return 0;
}
Share code to 
