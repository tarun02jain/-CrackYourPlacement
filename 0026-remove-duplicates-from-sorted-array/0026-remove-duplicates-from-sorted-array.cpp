class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 1) return 1;
        int j = 1;
        int i = 1;
        int prev = nums[0];
        while(j < nums.size()){
            if (nums[j] == prev)j++;
            else{
                prev = nums[j];
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
        return i;
    }
};