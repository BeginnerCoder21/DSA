/*
Print the pattern
1 
2 3 
4 5 6 
*/

void nNumberTriangle(int n) {
    // Write your code here.
    int k=1;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++){
          cout<<k<<" ";
          k++;
      }
      cout<<"\n";
    }
}