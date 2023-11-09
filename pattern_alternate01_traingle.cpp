/*
Print pattern
1 
0 1 
1 0 1 
0 1 0 1 
*/

void nBinaryTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
            
        }
        cout<<"\n";
    }
}