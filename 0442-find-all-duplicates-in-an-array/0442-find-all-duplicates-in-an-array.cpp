class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0; i<nums.size(); i++){
            int ele = abs(nums[i]);
            int ind = ele-1;

            if(nums[ind] < 0) ans.push_back(ele);
            else nums[ind] = nums[ind]*(-1);
        }
        return ans;
    }
};