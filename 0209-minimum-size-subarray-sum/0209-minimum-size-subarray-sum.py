class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        # nums.sort()
        # sum, count, j = 0, 0, len(nums) - 1
        # while j >= 0: 
        #     sum += nums[j]
        #     count += 1
        #     if sum >= target:
        #         return count 
        #     j -= 1               
        # return 0

        end = 0
        sum_val = 0
        result = float('inf')
        for i in range(len(nums)):
            sum_val += nums[i]
            while sum_val >= target:
                result = min(result, i + 1 - end)
                sum_val -= nums[end]
                end += 1

        return result if result != float('inf') else 0
            
        