class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = nums[0];
        int cnt = 1;
        for(int i = 1; i<nums.size(); i++){
            if (nums[i] != ele) {
                cnt--;
                if (cnt == 0) {
                    ele = nums[i];
                    cnt = 1;
                }
            }
            else cnt++;
        }
        return ele;
        //  cnt = 0;
        // for(int i = 0; i<nums.size(); i++){
        //     if (nums[i] == ele){
        //         cnt++;
        //     }
        // }
        // if (cnt > nums.size()/2) return ele;
        // return -1;
    }
};