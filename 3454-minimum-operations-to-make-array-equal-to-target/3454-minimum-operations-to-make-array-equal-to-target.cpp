class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        int n = nums.size();
        vector<int> diff(n);
        for (int i = 0; i < n; ++i) {
            diff[i] = target[i] - nums[i];
        }

        long long ans = 0;
        long long currentDiff = 0;

        for (int i = 0; i < n; ++i) {
            if (i == 0 || (diff[i - 1] > 0 && diff[i] > 0) ||
                (diff[i - 1] < 0 && diff[i] < 0)) {
                long long extra =
                    abs(diff[i]) - abs(currentDiff);
                if (extra > 0) {
                    ans += extra;
                }
                currentDiff = diff[i];
            } else {
                ans += abs(diff[i]);
                currentDiff = diff[i];
            }
        }

        return ans;
    }
};
