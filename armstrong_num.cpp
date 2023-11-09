/*
1
Sample Output 1 :
true

Explanation of Sample Input 1 :
1 is an Armstrong number as, 1^1 = 1.

Sample Input 2 :
103
Sample Output 2 :
false
*/

#include <math.h>
bool checkArmstrong(int n){
	//Write your code here
	int rem=0, sum=0, num=n, count;
	if(n==1){
		return true;
	}
	else{
		while(n){
		rem=n%2;
		n=n/2;
		count++;
	}
	while(n){
		rem=n%2;
		sum+=pow(rem, count);
		n=n/2;
	}
	if( sum==num){
		return true;
	}
	else return false;
	}
}
