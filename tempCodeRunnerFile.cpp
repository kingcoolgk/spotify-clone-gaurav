#include <bits/stdc++.h>
using namespace std;


   int main()
{   int ans=0;
    int missnum1,missnum2,missnum3,missnum4;
    int mat[3][3];
    int t;
    cin>>t;
    while(t--){
       cin>>mat[0][0];
       cin>>mat[0][1];
       cin>>mat[0][2];
       cin>>mat[1][0];
       cin>>mat[1][2];
       cin>>mat[2][0];
       cin>>mat[2][1];
       cin>>mat[2][2];
      
       if(2*mat[0][1]==mat[0][1]+mat[0][2]){
           ans+=1;
       }
       if(2*mat[2][1]==mat[2][1]+mat[2][2]){
           ans+=1;
       }
       if(2*mat[1][0]==mat[0][0]+mat[2][0]){
           ans+=1;
       }
       if(2*mat[0][2]==mat[1][2]+mat[2][2]){
           ans+=1;
       }
       if((mat[1][0]+mat[1][2])%2==0){
           missnum1=(mat[1][0]+mat[1][2])/2;
       }
       else if((mat[0][1]+mat[2][1])%2==0){
           missnum2=(mat[0][1]+mat[2][1])/2;
           
       }
       else if((mat[0][0]+mat[2][2])%2==0){
           missnum3=(mat[0][0]+mat[2][2])/2;
       }
       else if((mat[0][2]+mat[2][0])%2==0){
           missnum4=(mat[0][2]+mat[2][0])/2;
       }
       if(missnum1==missnum2){
           ans+=2;
           if(missnum1==missnum3 && missnum1 != missnum4){
               ans+=1;
           }
           else if(missnum1==missnum4 && missnum1==missnum3){
               ans+=2;
           }
           else if(missnum1==missnum4 && missnum1 != missnum3){
               ans+=1;
       }
       
    }
    else if(missnum1 != missnum2){
        if(missnum1==missnum3 && missnum1 != missnum4){
               ans+=1;
           }
           else if(missnum1==missnum4 && missnum1==missnum3){
               ans+=2;
           }
           else if(missnum1==missnum4 && missnum1 != missnum3){
               ans+=1;
       }
        else if(missnum2==missnum3 && missnum2 != missnum4){
               ans+=1;
           }
           else if(missnum2==missnum4 && missnum2==missnum3){
               ans+=2;
           }
           else if(missnum2==missnum4 && missnum2 != missnum3){
               ans+=1;
       }
    }
    
    

     cout<<ans;}
     return 0;}