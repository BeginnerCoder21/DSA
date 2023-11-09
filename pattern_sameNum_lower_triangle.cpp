/*
WAP to code * lower traingle of length n
1
2 2 
3 3 3 
4 4 4 4
*/


void triangle(int n) {
	// Write your code here
	int k=0;
	for(int i=0;i<n;i++){
		k=i+1;
		for(int j=0;j<=i;j++){
			cout<<k<<" ";
		}
		k++;
		cout<<"\n";
	}
}


/*
OR
void triangle(int n) {
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<"\n";
	}
}
*/