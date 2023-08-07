class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates.sort()
        res = []
        stack = []

        def backtrack(i, total):
            if total == target:
                res.append(stack[:])
                return
            if i == len(candidates) or total > target:
                return

            stack.append(candidates[i])
            backtrack(i, total + candidates[i])
            stack.pop()
            backtrack(i + 1, total)

        backtrack(0, 0)
        return res
