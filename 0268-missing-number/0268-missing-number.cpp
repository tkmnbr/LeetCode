class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num_index = nums.size()-1;
        if(num_index == 0 and nums[0] == 0)
            return 1;
        if(num_index == 0 and nums[0] == 1)
            return 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < num_index; i++){
            if(nums[0] != 0)
                return 0;
            if(nums[i] != nums[i+1]-1)
                return nums[i+1]-1;
        }
        return nums[num_index]+1;
    }
};