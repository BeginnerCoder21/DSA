/*
Print below pattern
     *     
    ***    
   *****   
  *******  
 ********* 
***********
***********
 ********* 
  *******  
   *****   
    ***    
     *     

*/

void nStarDiamond(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        //space
         for(int j=0;j<n-i-1;j++){
             cout<<" ";
         }
         //star
         for(int j=0;j<2*i+1;j++){
             cout<<"*";
         }

         //space
         for(int j=0;j<n-i-1;j++){
             cout<<" ";
         }
         cout<<"\n";
    }
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }

        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}