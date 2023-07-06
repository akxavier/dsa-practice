class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        if len(heights) == 1:
            return heights[0]

        l, r = 0, 0
        stack = []

        maxArea = 0
        while r < len(heights):
            c = r
            while stack and stack[-1][1] > heights[r]:
                c = stack[-1][0]
                area = (r - stack[-1][0]) * stack[-1][1]
                if area > maxArea:
                    maxArea = area
                stack.pop()
            stack.append([c, heights[r]])
            r += 1

        while stack:
            area = (len(heights) - stack[-1][0]) * stack[-1][1]
            maxArea = max(maxArea, area)
            stack.pop()

        return maxArea