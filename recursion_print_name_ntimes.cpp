/*
3

Sample Output 1:
Coding Ninjas Coding Ninjas Coding Ninjas 

Explanation of sample output 1:
“Coding Ninjas” is printed 3 times. 
*/

vector<string> printNTimes(int n) {
	// Write your code here.
	if(n==0){
          return {};
        }
	vector<string> names=printNTimes(n-1);
	names.push_back("Coding Ninjas ");
	return names;
}