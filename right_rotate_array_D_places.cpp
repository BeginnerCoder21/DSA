/*
Example 1:
Input: N = 7, array[] = {1,2,3,4,5,6,7} , d = 3
Output: 5 6 7 1 2 3 4
Explanation: The array is rotated to the right by 3 positions.

Example 2:
Input: N = 6, array[] = {3,7,8,9,10,11} , d = 2 
Output: 10 11 3 7 8 9
Explanation: The array is rotated to the right by 2 positions.
*/

#include <bits/stdc++.h>
using namespace std;

void rightRotate(int arr[], int n, int d) {

    if (n == 0) return;

    // Get the effective number of rotations:
    d = d % n;

    // checking if d is a multiple of n:
    if (d == 0) return;

    int temp[d]; // temporary array

    //step 1: Copying last d elements
    // in the temporary array:
    for (int i = n - d; i < n; i++) {
        temp[i - (n - d)] = arr[i];
    }

    // step 2: Shift first (n-d) elements
    // to the right by d places in the given array:
    for (int i = n - d - 1; i >= 0; i--) {
        arr[i + d] = arr[i];
    }

    //step 3: Place the elements of the temporary
    // array in the first d places of the given array:
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}
