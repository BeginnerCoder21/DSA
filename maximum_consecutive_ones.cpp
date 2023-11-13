/*
Sample Input 1:
2
8
0 1 1 0 0 1 1 1
4
0 1 1 0
Sample Output 1:
3
2
Explanation for Sample Output 1:
For the first test case, ‘ARR’ = [0, 1, 1, 0, 0, 1, 1, 1], here you can see the maximum length of 
consecutive 1’s is 3 when we select ARR[5], ARR[6] and ARR[7]. Hence the answer is 3.

For the second test, ‘ARR’ = [0, 1, 1, 0], here you can see the maximum length of consecutive 1’s is 2 
when we select ARR[1] and ARR[2]. Hence the answer is 2.
*/

int consecutiveOnes(vector<int>& arr){
    //Write your code here.
    int maxi=0, count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            //counting the no of 1's
            count++;
            //Find the max num of 1s from count and maxi var, and 
            //assigning it to maxi
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    return maxi;
}