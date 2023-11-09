/*
Input : n = 12
Output : 2
1 and 2 divide 12.

Input : n = 1012
Output : 3
1, 1 and 2 divide 1012.
*/

int countDigits(int n){
	// Write your code here.
	int count=0,rem=0;
	int num=n;
	while(num){
		rem=num%10;
		num=num/10;
		if(rem>0 && n%rem==0){
			count++;
		}
	}
	return count;
}