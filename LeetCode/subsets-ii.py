class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        res = set()
        stack = []
        nums.sort()

        def backtrack(i):
            if i == len(nums):
                res.add(tuple(stack))
                return
            stack.append(nums[i])
            backtrack(i + 1)
            stack.pop()
            backtrack(i + 1)

        backtrack(0)
        return res
