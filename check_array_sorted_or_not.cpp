/*
Sample Input 1 :
4
0 0 0 1
Sample Output 1 :
1
Explanation For Sample Input 1 :
The given array is sorted in non-decreasing order; hence the answer will be 1. 
*/

int isSorted(int n, vector<int> a) {
    // Write your code here.
    int flag=0;
    for(int i=1;i<n;i++){
        if(a[i-1]<=a[i]){
            flag=1;
        }
        else{
            return 0;
        }
    }
    if(flag==1){
        return 1;
    }
}
