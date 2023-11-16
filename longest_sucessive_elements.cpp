/*
100, 200, 1, 2, 3, 4
Output: The longest consecutive sequence is 4. (1,2,3,4)

*/

// bool linearSearch(vector<int>&a, int num){
//     for(int i=0;i<a.size();i++){
//         if(a[i]==num){
//             return true;
//             break;
//         }
//     }
//     return false;
// }

int longestSuccessiveElements(vector<int> &a) {
    // Method 1:
    // int longest=1;
    // int x, count=0;
    // for(int i=0;i<a.size();i++){
    //     x=a[i];
    //     count=1;
    //     //search for consecutive numbers using linearSearch
    //     while(linearSearch(a,x+1)==true){
    //         x=x+1;
    //         count=count+1;
    //     }
    //     longest = max(longest, count);
    // }
    // return longest;

    //Method 2:
    int n = a.size();
    if (n == 0) return 0;

    //sort the array:
    sort(a.begin(), a.end());
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;

    //find longest sequence:
    for (int i = 0; i < n; i++) {
        if (a[i] - 1 == lastSmaller) {
            //a[i] is the next element of the
            //current sequence.
            cnt += 1;
            lastSmaller = a[i];
        }
        else if (a[i] != lastSmaller) {
            cnt = 1;
            lastSmaller = a[i];
        }
        longest = max(longest, cnt);
    }
    return longest;

}