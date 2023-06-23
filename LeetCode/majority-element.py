class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        maj = nums[0]
        count = 0
        for i in range(len(nums)):
            if nums[i] == maj:
                count += 1
            else:
                count -= 1

            if count == 0:
                maj = nums[i + 1]
        return maj
