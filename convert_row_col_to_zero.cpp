/*
2 3
2 4 3
1 0 0

Your Output
2 0 0 
0 0 0 

If there is a 0 in input matrix, change the numbers to 0 in that row & column

*/
#include <bits/stdc++.h> 
void markRow(vector<vector<int>> &matrix, int n, int m, int i){
	for(int j=0;j<m;j++){
		if(matrix[i][j]!=0){
			matrix[i][j]=-1;
		}
	}
}

void markCol(vector<vector<int>> &matrix, int n, int m, int j){
	for(int i=0;i<n;i++){
		if(matrix[i][j]!=0){
			matrix[i][j]=-1;
		}
	}
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

	// Method 2:
	int col[m]={0};
	int row[n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				row[i]=1;
				col[j]=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(row[i] || col[j]){
				matrix[i][j]=0;
			}
		}
	}
	return matrix;

	//Method 1:
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		if(matrix[i][j]==0){
	// 			markRow(matrix, n,m,i);
	// 			markCol(matrix, n,m,j);
	// 		}
	// 	}
	// }
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		if(matrix[i][j]==-1){
	// 			matrix[i][j]=0;
	// 		}
	// 	}
	// }
	// return matrix;

	//Method 3: Optimal
	// int col0 = 1;
    // // step 1: Traverse the matrix and
    // // mark 1st row & col accordingly:
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         if (matrix[i][j] == 0) {
    //             // mark i-th row:
    //             matrix[i][0] = 0;

    //             // mark j-th column:
    //             if (j != 0)
    //                 matrix[0][j] = 0;
    //             else
    //                 col0 = 0;
    //         }
    //     }
    // }

    // // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
    // for (int i = 1; i < n; i++) {
    //     for (int j = 1; j < m; j++) {
    //         if (matrix[i][j] != 0) {
    //             // check for col & row:
    //             if (matrix[i][0] == 0 || matrix[0][j] == 0) {
    //                 matrix[i][j] = 0;
    //             }
    //         }
    //     }
    // }

    // //step 3: Finally mark the 1st col & then 1st row:
    // if (matrix[0][0] == 0) {
    //     for (int j = 0; j < m; j++) {
    //         matrix[0][j] = 0;
    //     }
    // }
    // if (col0 == 0) {
    //     for (int i = 0; i < n; i++) {
    //         matrix[i][0] = 0;
    //     }
    // }

    // return matrix;
}