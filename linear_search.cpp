/*
Sample Input 1:
5 4
6 7 8 4 1
Sample Output 1 :
3
Explanation Of Sample Input 1:
4 is present at the 3rd index.
Sample Input 2:
4 2
2 5 6 2
Sample Output 2 :
*/

int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
    int res=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num){
            res=i;
            break;
        }
    }
    if(res==-1){
        return -1;
    }
    else{
        return res;
    }
}
