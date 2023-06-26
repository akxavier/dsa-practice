class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        beg, end = 0, len(nums) - 1
        while beg < end:
            sum = nums[beg] + nums[end]
            if sum == target:
                return [beg + 1, end + 1]
            elif sum < target:
                beg += 1
            else:
                end -= 1