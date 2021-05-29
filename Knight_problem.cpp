/*
So kya kare phir ? karna kya hai ???
number of ways to set up the 
1 knight in nxn matrix = n^2 positions
2 knights  = (  n^2-1 ) / 2 
toh total = n^2  * (  n^2-1 ) / 2
so knight jo hai L shape meh attack karta hai..hmm so 
2x3 ya 3x2 ka attack matrix banega hai nah !? 
2x3 ke kitne matrix in nxn = n-1 * n-2 
aur 3x2 ke kitne matrix in nxn = n-1 * n-2 (same)
toh total attack Matrix = 2 *  n-1 * n-2
har attack matrix meh 2 positions block honge k2 ke liye = 4 * n-1 * n-2 
toh ab ans  = total positions - threatened positions

*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std; 

typedef long long ll ;
int main()
{
    ll x; 
    cin >> x; 
    for (ll n=1 ; n <= x ; ++n){
        if( n == 1 ){
            cout<<"0"<<endl; 
        }
        
        else
        {
            ll total_pos = 0 , threatened_pos = 0 ;
            
            total_pos = (n*n)*(n*n - 1)/2;
            threatened_pos =  4 * (n-1) * (n-2);
            cout<<total_pos - threatened_pos << endl ;
        }
    }

    return 0;
}
