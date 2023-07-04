class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        tokens = tokens[::-1]
        res = []

        while tokens:
            c = tokens.pop()
            if c in ['*', '/', '+', '-']:
                b = res.pop()
                a = res.pop()
                if c == '*':
                    ans = a * b
                elif c == '/':
                    ans = int(a / b)
                elif c == '+':
                    ans = a + b
                elif c == '-':
                    ans = a - b
                res.append(ans)
            else:
                res.append(int(c))

        return res[0]
