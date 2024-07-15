class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        // vector<vector<int>>dp(n+1, vector<int>(2,0));

        int ahead0 = 0;
        int ahead1 = 0;
        for(int i = n-1; i>=0; i--){
            for(int buy = 0; buy<2; buy++){
                if (buy == 0){
                    ahead0 = max(0+ahead0, -prices[i] + ahead1);
                }
                if (buy == 1){
                    ahead1 = max(0 + ahead1 , prices[i] + ahead0);
                }
            }
        }
        return ahead0;
    }
};