class Solution:
    def search(self, nums: List[int], target: int) -> int:
        def binary_search(nums, l, r):
            if l <= r:
                mid = (l + r) // 2
                if nums[mid] == target:
                    return mid
                elif target < nums[mid]:
                    return binary_search(nums, l, mid - 1)
                else:
                    return binary_search(nums, mid + 1, r)
            else:
                return -1

        return binary_search(nums, 0, len(nums) - 1)
