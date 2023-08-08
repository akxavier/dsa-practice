class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates.sort()
        res = set()
        stack = []
        def backtrack(i, total):
            if total == target:
                res.add(tuple(stack))
                return
            elif total > target:
                return

            prev = -1
            for i in range(i, len(candidates)):
                if candidates[i] == prev:
                    continue
                stack.append(candidates[i])
                backtrack(i + 1, total + candidates[i])
                stack.pop()
                prev = candidates[i]
        
        backtrack(0, 0)
        return res