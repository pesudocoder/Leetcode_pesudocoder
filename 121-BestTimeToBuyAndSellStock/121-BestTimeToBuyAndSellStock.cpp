// Last updated: 12/19/2025, 3:25:43 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            int cost=prices[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,prices[i]);
        }




        return profit;
        
    }
};