/*
Sample Input 1:
6 
1 2 -3 -1 -2 3
Sample Output 1:
1 -3 2 -1 3 -2 
Explanation Of Sample Input 1:
Testcase 1:
Input:
A = [1, 2, -3, -1, -2, 3], N = 6
Output:
1 -3 2 -1 3 -2
Explanation: 
Positive elements = 1, 2, 3
Negative elements = -3, -1, -2
To maintain relative ordering, 1 should come before 2, and 2 must come before 3.
Also, -3 should come before -1, and -1 must come before -2.
Sample Input 2:
4
-2 -3 4 5
Sample Output 2:
4 -2 5 -3

*/

vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    //Method 2: (if size are not equal)
    vector<int> pos,neg;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]<0){
            neg.push_back(a[i]);
        }
        else{
            pos.push_back(a[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            a[i*2]=pos[i];
            a[i*2+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            a[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            a[i*2]=pos[i];
            a[i*2+1]=neg[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            a[index]=pos[i];
            index++;
        }
    }
    return a;

    //Method 1: (if size is equal of pos & neg)
    // int n=a.size();
    // int pos=0,neg=1;
    // vector<int> ans(n,0);
    // for(int i=0;i<n;i++){
    //     if(a[i]<0){
    //         ans[neg]=a[i];
    //         neg+=2;
    //     }
    //     else{
    //         ans[pos]=a[i];
    //         pos+=2;
    //     }
    // }
    // return ans;
}