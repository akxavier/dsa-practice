class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        if k == len(nums):
            return nums
        count_map = Counter(nums)
        count_dict = {}
        for key, val in count_map.items():
            if val not in count_dict:
                count_dict[val] = [key]
            else:
                count_dict[val].append(key)

        ans = []
        for j in range(len(nums)):
            i = len(nums) - j
            if i in count_dict:
                while count_dict[i]:
                    ans.append(count_dict[i].pop())
                    k -= 1
                if k <= 0:
                    break

        return ans

# Similar runtime, using HEAP


class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count_map = Counter(nums)

        heap = []
        for key, val in count_map.items():
            heapq.heappush(heap, (-val, key))

        ans = []
        while k:
            node = heapq.heappop(heap)
            ans.append(node[1])
            k -= 1

        return ans
