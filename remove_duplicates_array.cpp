/*
Sample input 1:
10
1 2 2 3 3 3 4 4 5 5 
Sample output 1:
5
Explanation of sample input 1:
The new array will be [1 2 3 4 5].
So our answer is 5.
*/

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int j=0;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[j]){
			arr[j+1]=arr[i];
			j++;
		}
	}
	return j+1;
}