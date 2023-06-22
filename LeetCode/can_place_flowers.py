class Solution:
    def canPlaceFlowers(self, flowerbed: list[int], n: int) -> bool:
        count = 0
        import math
        bed_len = len(flowerbed)
        if 1 not in flowerbed:
            count = math.ceil(len(flowerbed) / 2)
        else:
            first_1_pos = flowerbed.index(1)
            if first_1_pos != 0:
                count = math.floor(first_1_pos / 2)

            i = first_1_pos + 1
            while i < bed_len:
                while (i < bed_len and flowerbed[i] != 1):
                    i += 1
                if i == bed_len:
                    count += math.floor((bed_len - first_1_pos - 1) / 2)
                else:
                    second_1_pos = i
                    count += math.floor((second_1_pos - first_1_pos - 2) / 2)
                    first_1_pos = second_1_pos
                    i += 1
        print(count)
        if count < n:
            return False
        else:
            return True

# Shorter solution


class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        flowerbed = [0] + flowerbed + [0]
        count = 0
        for i in range(1, len(flowerbed) - 1):
            if flowerbed[i - 1] == flowerbed[i] == flowerbed[i + 1]:
                flowerbed[i] = 1
                count += 1
        return count >= n
