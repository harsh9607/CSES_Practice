#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n=0,x=0,y=0, maxi=0,maxi_number=0,corner_number=0,cor_x=0,cor_y=0,ans=0;
    
    cin>>n;
    for(int k=0 ; k<n ; k++){
        cin>>x>>y;
        
        if(x==1 && y==1){
            ans = 1;
            
        }
        
        else{
            // Finding the corner ele and then proceeding
             
            maxi = max(x,y); 
            maxi_number = maxi*maxi; 
            corner_number = maxi_number - maxi + 1; 
            cor_x = maxi;
            cor_y = maxi; 
            
            if(maxi_number%2 ==0){
                if(x == cor_x){
                    ans = corner_number + ( cor_y - y);
                }
                else
                {
                    ans = corner_number - (cor_x - x);
                }
                
            }
            
            else{
                if(x == cor_x){
                    ans = corner_number - ( cor_y - y);
                }
                else
                {
                    ans = corner_number + (cor_x - x);
                }
                
            }
            
        }
        
        cout<<ans<<endl; 
        
    }
    
    return 0;
}
