/*
Sample Input 1:
5 5
4 1 2 3 1
Sample Output 1 :
YES
Explanation Of Sample Input 1:
Sam can buy 4 pages book and 1-page book.
Sample Input 2:
2 1
1 2
Sample Output 2 :
NO
*/
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    int left=0,right=n-1;
    sort(book.begin(),book.end());
    while(left<right){
        if(book[left]+book[right]==target){
                return "YES";
                break;
            }
        else if(book[left]+book[right]<target){
            left++;
            
        }
        else right--;
    }
    return "NO";

    // OR --> O(n*n)
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i==j) continue;
    //         if((book[i]+book[j])==target){
    //             return "YES";
    //             break;
    //         }
    //     }
    // }
    // return "NO";
}
