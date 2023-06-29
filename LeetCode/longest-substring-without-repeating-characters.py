class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        maxLen = 0
        mapChar = {}
        length = 0
        beg = 0
        for i in range(len(s)):
            if s[i] not in mapChar or mapChar[s[i]] < beg:
                mapChar[s[i]] = i
                length += 1
                # print(i, length, 0)
            else:
                if length > maxLen:
                    maxLen = length
                length = i - mapChar[s[i]]
                beg = mapChar[s[i]] + 1
                mapChar[s[i]] = i
                # print(i, length)
        if length > maxLen:
            maxLen = length
        return maxLen
