class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        s1_map = dict(Counter(s1))
        s2_map = {x: 0 for x in s1_map.keys()}
        l = 0
        for r in range(len(s2)):
            if s1_map == s2_map:
                return True

            if s2[r] not in s1_map:
                l = r + 1
                s2_map = {x: 0 for x in s1_map.keys()}

            elif s2_map[s2[r]] == s1_map[s2[r]]:
                if s2[l] != s2[r]:
                    while s2[l] != s2[r]:
                        s2_map[s2[l]] -= 1
                        l += 1
                l += 1

            else:
                s2_map[s2[r]] = 1 + s2_map.get(s2[r], 0)
            r += 1
        return (s1_map == s2_map)
