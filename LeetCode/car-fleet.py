class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        map_pos = {}
        for i in range(len(position)):
            map_pos[position[i]] = speed[i]
        map_pos = {key: val for key, val in sorted(
            map_pos.items(), key=lambda x: x[0])}

        position = [x for x in map_pos.keys()]
        speed = [x for x in map_pos.values()]

        fleets = 0
        front = len(position) - 1
        while front > 0:
            fleets += 1

            next = front - 1
            while (next >= 0):
                if speed[front] < speed[next]:
                    arrival = (target - position[front]) / speed[front]
                    catch_time = (
                        position[front] - position[next]) / (speed[next] - speed[front])
                    if catch_time <= arrival:
                        next -= 1
                    else:
                        break
                else:
                    break
            front = next

        if front == 0:
            fleets += 1

        return fleets

# Cleaner solution


class Solution:
    def carFleet(self, target: int, positions: List[int], speeds: List[int]) -> int:
        prev_time = 0
        fleets = 0

        for position, speed in sorted(zip(positions, speeds), reverse=True):
            time = (target - position) / speed
            if time > prev_time:
                prev_time = time
                fleets += 1

        return fleets
