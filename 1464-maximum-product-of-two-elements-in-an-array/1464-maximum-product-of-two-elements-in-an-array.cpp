class Solution {
public:
    int curr_max = 0;
    int maxProduct(vector<int>& nums) {
        //Brute Force
        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = 0; j < nums.size(); j++){
        //         if(i != j && curr_max < (nums[i] - 1)*(nums[j] - 1))
        //             curr_max = (nums[i] - 1)*(nums[j] - 1);
        //     }
        // }
        // return curr_max;

        //Find the two biggest numbers
        int biggest = 0, second_biggest = 0;
        for(int i = 0; i < nums.size(); i++){
            if(biggest < nums[i]){
                second_biggest = biggest;
                biggest = nums[i];
            }
            else{
                second_biggest = max(nums[i], second_biggest);
            }
        }
        return (biggest - 1)*(second_biggest - 1);
    }
};