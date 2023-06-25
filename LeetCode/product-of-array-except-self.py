class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        ans = [1]
        for i in range(1, len(nums)):
            ans.append(nums[i - 1] * ans[i - 1])
        prev = 1
        for i in range(len(nums) - 2, -1, -1):
            ans[i] = ans[i] * prev * nums[i + 1]
            prev = prev * nums[i + 1]
        return ans
