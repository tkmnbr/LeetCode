class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        for(i; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[j] = nums[i];
                if(i != j)
                    nums[i] = 0;
                j++;
            }
        }
    }
};