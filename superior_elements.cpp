/*
Sample Input 1:
4 
1 2 2 1


Sample Output 1:
1 2


Explanation of Sample Input 1:
Element present at the last index is '1' and is a superior element since there are no integers to the right of it.
Element present at index 2 (0-indexed) is '2' and is greater than all the elements to the right of it.
There are no other superior elements present in the array.
Hence the final answer is [1,2].


Sample Input 2:
3
5 4 3


Sample Output 2:
3 4 5 
*/
vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    int maxi=INT_MIN;
    int n=a.size();
    for(int i=n-1;i>=0;i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
    }
    sort(ans.begin(), ans.end()-1);
    return ans;

    //For counting
    // int count = 0;
    // for(int i=0;i<arr.size();i++) {
    //     int flag = 1;
    //     for(int j=i+1;j<arr.size();j++) {
    //         if(arr[i] < arr[j]) {
    //             flag = 0;
    //             break;
    //         }
    //     }
    //     if(flag == 1)
    //         count++;
    // }
    // cout << count;
    // return 0;
}