class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>preNum;
        preNum[nums[0]] = 0;
        for(int i = 1; i<nums.size(); i++){
            int rem = target - nums[i];
            if (preNum.find(rem) != preNum.end()){
                return {i,preNum[rem]};
            }
            preNum[nums[i]] = i;
        }
        return {-1,-1};
    }
};