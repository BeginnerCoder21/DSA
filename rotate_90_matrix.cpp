/*
3
1 2 3
4 5 6
7 8 9

Output:
7 4 1 
8 5 2 
9 6 3 

*/

#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	// Transpose
	int n=mat.size();
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int temp=mat[i][j];
			mat[i][j]=mat[j][i];
			mat[j][i]= temp;
		}
	}
	//Reverse row
	for(int i=0;i<n;i++){
		// int start=mat[i].begin();
		// int end=mat[i].end();
		// if(start<end){
		// 	swap(start,end);
		// 	start++;
		// 	end--;
		// }
		reverse(mat[i].begin(), mat[i].end());
	}
}