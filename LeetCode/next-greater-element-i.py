class Solution:
    def nextGreaterElement(self, nums1: list[int], nums2: list[int]) -> list[int]:
        ans = []
        for num in nums1:
            pos = nums2.index(num) + 1
            while (pos < len(nums2)):
                if nums2[pos] > num:
                    break
                pos += 1
            if (pos == len(nums2)):
                ans.append(-1)
            else:
                ans.append(nums2[pos])

        return ans

# Solution using stack


class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        greater_map = {x: -1 for x in nums1}
        stack = []
        for num in nums2:
            while stack and stack[-1] < num:
                prev_num = stack.pop()
                if prev_num in greater_map:
                    greater_map[prev_num] = num
            stack.append(num)
        return [greater_map[x] for x in nums1]
