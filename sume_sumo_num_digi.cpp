/*
Program to input a number and find the sum of even nums and odd numbers in it
Enter a number: 12345
Sum of even digit place numbers: 5
Sum of odd digit place numbers: 6
*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n, rem=0;
	cin>>n;
	int sume=0,sumo=0;
	while(n){
		rem=n%10;
		if(rem%2==0){
			sume+=rem;
		}
		else{
			sumo+=rem;
		}
		n=n/10;
	}
	cout<<sume<<" "<<sumo;
	return 0;
	
}
