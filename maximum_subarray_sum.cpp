/*
Sample Input 1 :
9
1 2 7 -4 3 2 -10 9 1


Sample Output 1 :
11


Explanation for Sample 1 :
The subarray yielding the maximum sum is [1, 2, 7, -4, 3, 2].


Sample Input 2 :
6
10 20 -30 40 -50 60


Sample Output 2 :
60
*/

long long maxSubarraySum(vector<int> arr, int n)
{
    //Method 2: Kadane's Algorithm 
    long long maxi = LONG_MIN; // maximum sum
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > maxi) {
            maxi = sum;
        }
        // If sum < 0: discard the sum calculated
        if (sum < 0) {
            sum = 0;
        }
    }
    if (maxi < 0) maxi = 0;

    return maxi;

    //Method 1:
    // int maxi=INT_MIN, sum;
    // if(n==0) return 0;
    // for(int i=0;i<n;i++){
    //     sum=0;
    //     for(int j=i;j<n;j++){
    //             sum+=arr[j];
    //             maxi=max(maxi,sum);
    //     }
    // }
    // return maxi;
}