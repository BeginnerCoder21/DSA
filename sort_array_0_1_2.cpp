/*
Sample Input 1:
8
2 2 2 2 0 0 1 0


Sample Output 1:
0 0 0 1 2 2 2 2


Explanation of sample input 1 :
The initial array 'arr' is [2, 2, 2, 2, 0, 0, 1, 0].

After sorting the array in increasing order, 'arr' is equal to:
[0, 0, 0, 1, 2, 2, 2, 2]
*/

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Method 1: count no of 1s, 2s, 0s and then add in the array
    // int c0=0,c1=0,c2=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0) c0++;
    //     else if(arr[i]==1) c1++;
    //     else c2++;
    // }
    // for(int i=0;i<c0;i++){
    //     arr[i]=0;
    // }
    // for(int i=c0;i<c0+c1;i++){
    //     arr[i]=1;
    // }
    // for(int i=c0+c1;i<n;i++){
    //     arr[i]=2;
    // }

    //Method 2: Dutch National Flag Algorithm
    int low=0, high=n-1, mid=0;
    while(mid<=high){ //unsorted section
         if(arr[mid]==0){
             swap(arr[low],arr[mid]);
             low++;
             mid++;
         }
         else if(arr[mid]==1){
             mid++;
         }
         else{
             swap(arr[mid],arr[high]);
             high--;
         }
    }
}
