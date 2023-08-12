class MedianFinder:

    def __init__(self):
        self.first, self.second = [], []

    def addNum(self, num: int) -> None:
        if not self.second:
            heapq.heappush(self.second, num)
        elif not self.first:
            if num > self.second[0]:
                heapq.heappush(self.first, -heapq.heappop(self.second))
                heapq.heappush(self.second, num)
            else:
                heapq.heappush(self.first, -num)
        else:
            if len(self.first) == len(self.second):
                if num >= -self.first[0]:
                    heapq.heappush(self.second, num)
                else:
                    heapq.heappush(self.second, -heapq.heappop(self.first))
                    heapq.heappush(self.first, -num)
            else:
                if num <= self.second[0]:
                    heapq.heappush(self.first, -num)
                else:
                    heapq.heappush(self.first, -heapq.heappop(self.second))
                    heapq.heappush(self.second, num)

    def findMedian(self) -> float:
        print(len(self.first), len(self.second))
        if len(self.first) < len(self.second):
            return self.second[0]
        else:
            return (-self.first[0] + self.second[0]) / 2


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()
