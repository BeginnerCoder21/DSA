/*
Sample input 1:
4
0 0 0 1 
Sample output 1:
1 0 0 0 
Explanation of sample input 1:
Output: [1, 0, 0, 0]

We move all the 0’s to the end of an array, and the rest of the elements retained the order at the start.
Sample input 2:
5
4 0 3 2 5 
Sample output 2:
4 3 2 5 0 
Explanation of sample input 2:
Output: [4, 3, 2, 5, 0]
*/

vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int j = -1;

    // Find the first position of 0 in the array
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }
    
    //base case if array doesn;t contain any 0
    if(j==-1) return a;

    //starting from ahead of 1st 0 in array
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    return a;
}