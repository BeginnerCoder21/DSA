/*
Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 
2 is the missing number in the range since it does not appear in nums.
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //Found the sum of given array and sum upto the size of array using n*(n+1)/2, and if its equal
        //return 0 else subtract the sums to get the missing number 
        int n=nums.size();
        int sum=0, nsum=0;
        nsum=n*(n+1)/2;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum==nsum){
            return 0;
        }
        else{
            return nsum-sum;
        }
    }
};

/*
OR
int missingNumber(vector<int>& a, int N) {
    int sum = 0;
    
    for (int i = 0; i < N; i++) {
        sum ^= (i + 1);  // XOR operation with expected consecutive numbers
        sum ^= a[i];     // XOR operation with elements in the array
    }

    return sum;
}
*/