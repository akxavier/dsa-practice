class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        if not stones:
            return 0
        heap = [-x for x in stones]
        heapq.heapify(heap)
        while len(heap) >= 2:
            a = heapq.heappop(heap) * -1
            b = heapq.heappop(heap) * -1
            if a > b:
                heapq.heappush(heap, -(a - b))

        if len(heap) == 1:
            return -heap[0]
        else:
            return 0