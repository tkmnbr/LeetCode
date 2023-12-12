class Solution {
public:
    int curr_max = 0;
    int maxProduct(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(i != j && curr_max < (nums[i] - 1)*(nums[j] - 1))
                    curr_max = (nums[i] - 1)*(nums[j] - 1);
            }
        }
        return curr_max;
    }
};