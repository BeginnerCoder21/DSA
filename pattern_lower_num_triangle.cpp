/*
WAP to code * lower traingle of length n
1
1 2 
1 2 3 
1 2 3 4
*/


void nTriangle(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
}