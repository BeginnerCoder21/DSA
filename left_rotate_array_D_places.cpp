/*
Sample Input 1:
8
7 5 2 11 2 43 1 1
2
Sample Output 1:
2 11 2 43 1 1 7 5
Explanation of Sample Input 1:
Rotate 1 steps to the left: 5 2 11 2 43 1 1 7
Rotate 2 steps to the left: 2 11 2 43 1 1 7 5
*/

vector<int> rotateArray(vector<int> arr, int k) {
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n=arr.size();
    vector<int> res;
    k=k%n; //So that id needed to rotate more than size of array, it should become less than array like 8+1, 8 times+1 time rotation
    int temp[k],i;
    //temp array will contain elements that needs to be rotated
    for(i=0;i<k;i++){
        temp[i]=arr[i];
    }
    //shifitng elements from k position to start of array
    for(i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    //adding temp to the end of the shifted array
    for(i=n-k;i<n;i++){
        arr[i]=temp[i-(n-k)];
    }
    //printing updated array after shifting
    for(i=0;i<n;i++){
        res.push_back(arr[i]);
    }
    return res;
}