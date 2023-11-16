/*
5 3
13 32 8 
37 14 26 
29 16 45 
32 23 29 
38 24 17 

Output:
13 32 8 26 45 29 17 24 38 32 29 37 14 16 23 
*/

vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    // Write your code here.
    int n=MATRIX.size();
    int m=MATRIX[0].size();
    int left=0, right=m-1;
    int top=0,bottom=n-1;
    vector<int> ans;

    while(top<=bottom && left<=right){
        //top row
        for(int i=left;i<=right;i++){
            ans.push_back(MATRIX[top][i]);
        }
        //right vertical row
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(MATRIX[i][right]);
        }
        right--;
        //bottom row
        if(top<=bottom){
            for(int i=right;i>=left;i--){
            ans.push_back(MATRIX[bottom][i]);
        }
        bottom--;
        }
        if(left<=right){
        //left vertical row
        for (int i = bottom; i >= top; i--) {
            ans.push_back(MATRIX[i][left]);
        }
        left++;
        }
    }
    return ans;
}