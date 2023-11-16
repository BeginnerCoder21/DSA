/*
Sample Input 1:
3
3 1 2

Sample Output 1:
3 2 1

Explanation Of Sample Input 1:
Input:
A = [3, 1, 2]
Output:
3 2 1

Explanation: All the permutations of [1, 2, 3] are [[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1], ]. Hence the next greater permutation of [3, 1, 2] is [3, 2, 1].

Sample Input 2:
3
3 2 1

Sample Output 2:
1 2 3
*/

vector<int> nextGreaterPermutation(vector<int> &A) {
    // Write your code here.
    int idx=-1;
    int n=A.size();
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(A.begin(),A.end());
        return A;
    }
    for(int i=n-1;i>idx;i--){
        if(A[i]>A[idx]){
            swap(A[i],A[idx]);
            break;
        }
    }
    reverse(A.begin()+idx+1,A.end());
    return A;
}