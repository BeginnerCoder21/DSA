/*
Sample Input 1:
3
Sample Output 1 :
6
Explanation Of Sample Input 1:
Input: ‘n’ = 3

Output: 6

Explanation: The sum of the first 3 natural numbers is 1 + 2 + 3, equal to 6.
*/

long long sumFirstN(long long n) {
    // Write your code here.
    int sum=0;
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return n+sumFirstN(n-1);
    }
}