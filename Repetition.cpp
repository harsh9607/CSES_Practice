// User - HP007 on CSES 

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    vector<int> V ;    
   string s ;
   cin>>s;
   s = "1" + s + "1"; 
   
   int max =0 ; 
   
   for(int i = 1 ; i < s.length() ; i++){
       
       if( s[i] != s[i-1])
       {
           V.push_back(i); 
       }
      
       
   }
 
 
    for(int i=0 ; i<V.size()-1 ; i++){
        
        
        
        if( max < V[i+1] - V[i])
        {
            max = V[i+1]- V[i];
        }
        
    }
 
    
    cout<<max;
        
    return 0;
}
