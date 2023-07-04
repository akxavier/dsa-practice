class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if t == "":
            return ""

        need = len(t)
        have = 0
        t_map = dict(Counter(t))
        s_map = {x:0 for x in t_map.keys()}
        res = []
        resLen = len(s) + 1

        l, r = 0, -1
        while 1:
            while have < need and r < len(s) - 1:
                r += 1
                if s[r] in s_map:
                    s_map[s[r]] += 1
                    if s_map[s[r]] <= t_map[s[r]]:
                        have += 1
            if have < need:
                break

            while have == need:
                if resLen > r - l + 1:
                    resLen = r - l + 1
                    res = [l, r]

                if s[l] in s_map:
                    s_map[s[l]] -= 1
                    if s_map[s[l]] < t_map[s[l]]:
                        have -= 1
                l += 1
                
                while l < r and s[l] not in s_map:
                    l += 1

        if resLen == len(s) + 1:
            return ""
        else:
            l, r = res
            return s[l:r + 1]