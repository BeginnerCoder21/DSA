/*
Print pattern
A 
A B 
A B C 
*/

void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=i;j++){
            cout<<char(a)<<" ";
            a++;
        }
        cout<<"\n";
    }
}

/*
A B C 
A B 
A 
void nLetterTriangle(int n) {
    // Write your code here.
    char ch;
    for(int i=1;i<=n;i++){
        ch='A';
        for(int j=1;j<=n-i+1;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
}
*/

/*
A 
B B 
C C C

void alphaRamp(int n) {
    // Write your code here.
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<"\n";
        ch++;
    }
}

*/