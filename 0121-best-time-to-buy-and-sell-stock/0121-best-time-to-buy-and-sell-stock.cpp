class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mxProfit = 0;
        int maxi = prices[prices.size()-1];
        for(int i = prices.size()-2; i>=0; i--){
            if (prices[i] > maxi){
                maxi = prices[i];
            }
            else{
                mxProfit = max(mxProfit , maxi - prices[i]);
            }
        }
        if (mxProfit < 0) return 0;
        return mxProfit;
    }
};