/*
Sample Input 1 :
7 3
1 2 3 1 1 1 1

Sample Output 1 :
3

Explanation Of Sample Input 1 :
Subarrays whose sum = ‘3’ are:
[1, 2], [3], [1, 1, 1] and [1, 1, 1]
Here, the length of the longest subarray is 3, which is our final answer.

Sample Input 2 :
4 2
1 2 1 3

Sample Output 2 :
1
*/

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int left=0, right=0;
    long long sum=a[0];
    int maxLen=0;
    int n=a.size();
    //Enter a loop that continues until the right pointer reaches the end of the array.
    while(right<n){
        while(right<n){
            //adjust the subarray by moving the left pointer to the right as long as the current sum is greater than k
            while(left<=right && sum>k){
                sum-=a[left];
                left++;
            }
            //If the current sum is equal to k. If yes, update maxLen to store the maximum length of the subarray found so far.
            if(sum==k){
                maxLen=max(maxLen,right-left+1);
            }
            //Move the right pointer to the next element in the array and update the sum accordingly.
            right++;
            if(right<n){
                sum+=a[right];
            }

        }
    }
    return maxLen;
}