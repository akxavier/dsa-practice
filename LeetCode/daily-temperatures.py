class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = [-1]
        res = [0]

        for i in range(-2, -len(temperatures) - 1, -1):
            while stack and temperatures[stack[-1]] <= temperatures[i]:
                stack.pop()
            if not stack:
                res.append(0)
            else:
                res.append(stack[-1] - i)
            stack.append(i)

        return res[::-1]

# Alternate solution


class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []
        ans = [0] * len(temperatures)

        for i in range(len(temperatures)):
            while stack and temperatures[stack[-1]] < temperatures[i]:
                ind = stack.pop()
                ans[ind] = (i - ind)

            stack.append(i)

        return ans
