class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        tot = sum(nums)
        lsum = 0
        for ind, val in enumerate(nums):
            if tot - (lsum + val) == lsum:
                return ind
            lsum += val
        return -1
