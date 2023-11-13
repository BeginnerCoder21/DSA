/*
Sample Input 1 :
4
3 4 5 2
Sample Output 1 :
4 3
Explanation For Sample Input 1 :
The second largest element after 5 is 4 only, and the second smallest element after 2 is 3.
*/

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int large=a[0],slarge=-1;
    int small=a[0],ssmall=999;
    vector<int> result;
    //second largest
    for(int i=0;i<n;i++){
        if(large<a[i]){
            large=a[i];
        }
    }
    for(int j=0;j<n;j++){
        if(slarge<a[j] && a[j]<large){
            slarge=a[j];
        }
    }

    //second smallest
    for(int i=0;i<n;i++){
        if(small>a[i]){
            small=a[i];
        }
    }
    for(int j=0;j<n;j++){
        if(ssmall>a[j] && a[j]>small){
            ssmall=a[j];
        }
    }
    result.push_back(slarge);
    result.push_back(ssmall);
    return result;
}
