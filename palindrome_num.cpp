/*
Sample Input 1 :
1032
Sample Output 1 :
false
*/

bool palindrome(int n)
{
    // Write your code here
    int num=n, rev=0, rem=0;
    while(n){
        rem=n%10;
        n=n/10;
        rev=(rev*10)+rem;
    }
    if(num==rev){
        return true;
    }
    else{
        return false;
    }
}