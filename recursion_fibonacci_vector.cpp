/*
Sample Input 1:
5
Sample Output 1:
0 1 1 2 3
Explanation Of Sample Input 1:
The first 5 Fibonacci numbers are 0, 1, 1, 2, and 3.
*/
vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
   if (n == 0) {
        return {};
    } else if (n == 1) {
        return {0};
    }

    vector<int> fib = {0, 1};
    for (int i = 2; i < n; i++) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }

    return fib;
}