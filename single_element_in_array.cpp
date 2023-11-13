/*
Sample Input 1:
5
1 1 2 2 3

Sample Output 1:
3
Explanation of sample output 1:
{1, 2} each occurs twice, whereas 3 occurs only once.
Hence the answer is 3.

Sample Input 2:
5
8 8 9 9 10

Sample Output 2:
10
*/

#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.
	if(arr.size()==1){
		return arr[0];
	}
	for(int i=0;i<arr.size()-1;i+=2){
		// Check if the current element and the next element are different
			if(arr[i]!=arr[i+1]){
				// The current element is the single element
				return arr[i];
			}
	}
	 // If no single element is found, the last element is the single element
	return arr[arr.size() - 1];
}

/*
OR
int getSingleElement(vector<int> &arr){
	int xorr=0;
	for(int i=0;i<arr.size();i++){
		xorr=xorr^arr[i];
	}
	return xorr;
}
*/