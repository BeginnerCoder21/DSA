/*
Sample Input 1:
9 6

Sample Output 1:
3

GCD(a,b)=GCD(a-b,b)
*/

int calcGCD(int n, int m){
    // Write your code here.
    int gcd;
    for(int i=1;i<=min(n,m);i++){
        if(n%i==0 && m%i==0){
            gcd=i;
        }
    }
    return gcd;

    /* OR
    int calcGCD(int n, int m){
        int gcd;
        if(m==0) return n;
        if(n==0) return m;
        
        return calcGCD(m, n%m);
    }
    */
}


