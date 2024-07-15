class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int count = 0;

        unordered_map<int, int> mpp;
        mpp[0] = 1;

        for (int i : nums) {
            sum += i;
            int mod = sum % k;
            if (mod < 0)
                mod += k;
            if (mpp.find(mod) != mpp.end()) {
                count += mpp[mod];
            }
            mpp[mod]++;
        }

        return count;
    }
};