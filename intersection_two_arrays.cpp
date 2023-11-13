/*
Example 1:
Input: 
A: [1 2 3 3 4 5 6]
, B: [3 3 5]
Output: 3,3,5
Explanation: We are given two arrays A and B. 
The elements present in both the arrays  
are 3,3 and 5.

Example 2:
Input: 
A: [1 2 3 3 4 5 6]
, B: [3 5]
Output: 3,5
Explanation: We are given two arrays A and B. 
The elements present in both the arrays are 3 and 5.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> intersectionOfArrays(vector<int>A, vector<int>B){

    // Declare ans array.
    vector <int> ans;

    int i = 0, j = 0; 

    // to traverse the arrays
    while (i < A.size() && j < B.size()) {
        
    //if current element in i is smaller
    if (A[i] < B[j]) { 
        i++;
    } else if (B[j] < A[i]) {
        j++;
    } else {
        
        //both elements are equal
        ans.push_back(A[i]); 
        i++;
        j++;
    }
    }

    return ans;
}
/*
#include<bits/stdc++.h>
using namespace std;

  vector<int> intersectionOfArrays(vector<int>A, vector<int>B){
    
  vector <int> ans;
  
  // to maintain visited
  vector <int> visited(B.size(), 0);  
  int i = 0, j = 0;
  
  for (i = 0; i < A.size(); i++) {
      
    for (j = 0; j < B.size(); j++) {

      if (A[i] == B[j] && visited[j] == 0) { 
      
        //if element matches and has not been matched with any other before
        ans.push_back(B[j]);
        visited[j] = 1;

        break;
      } 
      
      else if (B[j] > A[i]) break; 
      //because array is sorted , element will not be beyond this
    }
  }
  
  return ans;
    
}

*/