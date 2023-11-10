/*
Sample Input 1:
5
Sample Output 1 :
1 2 3 4 5
Explanation Of Sample Input 1:
The array contains all integers from 1 to 5 in ascending order.
*/

vector<int> printNos(int x) {
    // Write Your Code Here
    if(x==0){
      return {};
    }
     vector<int> res=printNos(x-1);
     res.push_back(x);
     return res;

}