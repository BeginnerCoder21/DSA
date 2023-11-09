/*
Print below pattern
1         1 
1 2     2 1 
1 2 3 3 2 1 
*/

void numberCrown(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        int space=2*(n-1);
        //num
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //num
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
        space-=2;
    }
}