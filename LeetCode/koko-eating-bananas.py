class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        max_val = max(piles)
        l, r = 1, max_val
        res = max_val
        while l <= r:
            hours = 0
            k = (l + r) // 2
            for pile in piles:
                hours += math.ceil(pile / k)
            if hours <= h:
                r = k - 1
                res = min(res, k)
            else:
                l = k + 1
        return res