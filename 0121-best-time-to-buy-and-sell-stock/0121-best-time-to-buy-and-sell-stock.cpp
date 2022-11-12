class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, minimum = prices[0];
        for(int i = 1; i < prices.size(); i++){
            minimum = min(prices[i], minimum);
            profit = max(profit, (prices[i] - minimum));
        }
        return profit;
    }
};