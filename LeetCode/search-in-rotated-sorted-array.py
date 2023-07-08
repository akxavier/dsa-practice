class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1
        while l <= r:
            print(l, r)
            mid = (l + r) // 2
            if nums[mid] == target:
                return mid
            if target > nums[mid]:
                if nums[l] <= nums[mid]:
                    l = mid + 1
                elif target > nums[l]:
                    r = mid - 1
                elif target < nums[l]:
                    l = mid + 1
                elif target == nums[l]:
                    return l
                else:
                    return -1
            else:
                if nums[mid] < nums[r]:
                    r = mid - 1
                elif target < nums[l]:
                    l = mid + 1
                elif target > nums[l]:
                    r = mid - 1
                elif target == nums[l]:
                    return l
                else:
                    return -1
        return -1
