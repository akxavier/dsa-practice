class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) % 2 != 0:
            return False
        stack = []
        for i in range(len(s)):
            if s[i] in ['(', '[', '{']:
                stack.append(s[i])
            else:
                if not stack:
                    return False
                c = stack.pop()
                if (s[i] == ')' and c != '(') or \
                    (s[i] == ']' and c != '[') or \
                        (s[i] == '}' and c != '{'):
                    return False

        if stack:
            return False
        else:
            return True
