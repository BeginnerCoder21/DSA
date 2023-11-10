/*
Sample Input 1:
5
Sample Output 1 :
5 4 3 2 1
Explanation Of Sample Input 1:
Input: ‘n’ = 5

Output: 5 4 3 2 1

Explanation: An array containing integers from ‘5’ to ‘1’ is [5, 4, 3, 2, 1].
*/

void recursiveFunction(int x, vector<int>& ans) {
    if(x == 0) {
        return;
    }
    // Insert element in the array
    ans.push_back(x);
    
    // Call recursive function
    recursiveFunction(x - 1, ans);
}

vector<int> printNos(int x) {
    // Declaring empty integer array
    vector<int> ans;
    
    // Calling recursive function
    recursiveFunction(x, ans);
    
    return ans;
}