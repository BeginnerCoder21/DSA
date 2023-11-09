/*
Sample Input 1:
5

Sample Output 1:
YES
*/

bool isPrime(int n)
{
	// Write your code here.
	if(n <= 1) return false;

    for(int i = 2; i <sqrt(n); i++){
        if(n % i == 0)return false;
    }

    return true;
	
}
