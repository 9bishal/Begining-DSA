// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and
//  choosing a different day in the future to sell that stock.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int max_profit=0;
        int n=prices.size();
        for(int i=1; i<n; i++){
            int cost=prices[i]-mini;
            max_profit=max(max_profit,cost);
            mini=min(mini,prices[i]);
        }
        return max_profit;
    }
};