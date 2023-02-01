class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target <= nums[0])
                return 0;
        if(target > nums[nums.size()-1])
                return nums.size();
        if(target == nums[nums.size()-1])
                return nums.size()-1;
        for(int i = 0; i < nums.size(); i++){
             if(nums[i] == target)
                return i;
            if(nums[i] != target and nums[i] <= target and target <= nums[i+1])
                return i+1;
        }
        return -1;
    }
};