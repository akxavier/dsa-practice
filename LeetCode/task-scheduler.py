class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        count_map = dict(Counter(tasks))
        heap = []
        for count in count_map.values():
            heapq.heappush(heap, -count)
        dq = deque()

        time = 0
        while heap or dq:
            time += 1
            if not heap:
                time = dq[0][1]
            else:
                cnt = 1 + heapq.heappop(heap)
                if cnt:
                    dq.append([cnt, time+n])
            if dq and dq[0][1] == time:
                heapq.heappush(heap, dq.popleft()[0])

        return time
