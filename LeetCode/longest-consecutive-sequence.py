class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        if len(nums) == 0:
            return 0
        nums.sort()
        count = 1
        max_cnt = 0
        for i in range(1, len(nums)):
            if nums[i] == nums[i - 1] + 1:
                count += 1
            elif nums[i] == nums[i - 1]:
                continue
            else:
                max_cnt = max(max_cnt, count)
                count = 1
        max_cnt = max(max_cnt, count)

        return max_cnt
