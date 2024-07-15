class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);

        int dummy = 0;
        while(slow != dummy){
            slow = nums[slow];
            dummy = nums[dummy];
        }

        return dummy;
    }
};