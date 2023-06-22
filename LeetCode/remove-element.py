class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        for i in range(-len(nums), 0):
            if nums[i] == val:
                del(nums[i])

        return len(nums)
    
# Alternative Solution
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        for _ in range(nums.count(val)):
            nums.remove(val)
        return len(nums)