/*
Sample Input 1:
6
7 1 5 4 3 6

Sample Output 1 :
5

Explanation Of Sample Input 1:
Purchase stock on day two, where the price is one, and sell it on day six, where the price is 6. Profit = 6 - 1 = 5.

Sample Input 2:
5
5 4 3 2 1

Sample Output 2 :
0
*/
int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int mini=prices[0];
    int maxProfit=0;
    int n=prices.size();
    for(int i=0;i<n;i++){
        int cost=prices[i]-mini;
        maxProfit=max(maxProfit,cost);
        mini=min(mini,prices[i]);
    }
    return maxProfit;
}
