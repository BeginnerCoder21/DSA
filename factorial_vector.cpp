/*
Sample Input 1:
7
Sample Output 1 :
1 2 6
Explanation Of Sample Input 1:
Input: ‘n’ = 7

Output: 1 2 6

Explanation: Factorial numbers less than or equal to ‘7’ are ‘1’, ‘2’, and ‘6’.
*/

vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    if (n == 0 || n == 1) {
        return {1};
    }
    vector<long long> res;

    long long ans=1;

 

     for(int i=1;ans*i<=n;i++){

        ans=ans*i;

        res.push_back(ans);

     }

     return res;
}