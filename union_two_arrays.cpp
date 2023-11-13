/*
Sample Input 1 :
5 3
1 2 3 4 6
2 3 5
Sample Output 1 :
1 2 3 4 5 6
Explanation Of Sample Input 1 :
Input: ‘n’ = 5 ‘m’ = 3
‘a’ = [1, 2, 3, 4, 6]
‘b’ = [2, 3, 5]

Output: [1, 2, 3, 4, 5, 6]

Explanation: Common elements in ‘a’ and ‘b’ are: [2, 3]
Distinct elements in ‘a’ are: [1, 4, 6]
Distinct elements in ‘b’ are: [5]
Union of ‘a’ and ‘b’ is: [1, 2, 3, 4, 5, 6]
*/

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int s1=a.size();
    int s2=b.size();
    vector<int> temp;
    int i=0,j=0;

    //Check both arrays
    while(i<s1 && j<s2){
        //For sorting
        if(a[i]<=b[j]){
            //checking if temp is empty and lastly inserred elem is not same as already inserted
            if(temp.size()==0 || temp.back() != a[i]){
                temp.push_back(a[i]);
            }
            i++;
        }
        else{
            if(temp.size()==0 || temp.back() != b[j]){
                temp.push_back(b[j]);
            }
            j++;
        }
    }
      // if any elements present in a[], rest of the elements
    while(i<s1)
    {
        if(temp.back()!= a[i])
            temp.push_back(a[i]);
        i++;
    }

    // if any elements present in b[], rest of the elements
    while(j<s2)
    {
        if(temp.back()!= b[j])
            temp.push_back(b[j]);
        j++;
    }
    
    return temp;
}