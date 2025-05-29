class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int dp[n+1];
        memset(dp, 0, sizeof(dp));
        dp[1] = nums[0];
        for(int i = 2; i<=n; i++){
            dp[i] = max(dp[i-1] , nums[i-1]+dp[i-2]);
        }
        return dp[n];
    }
};