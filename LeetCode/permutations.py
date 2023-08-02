class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        stack = []
        res = []
        def backtrack(arr):
            if len(arr) == 0:
                res.append(stack[:])

            for i in range(len(arr)):
                stack.append(arr[i])
                backtrack(arr[:i] + arr[i + 1:])
                stack.pop()

        backtrack(nums)
        return res