def swap_case(s):
    res = ""
    for i in range(len(s)):
        if s[i].isupper():
            res = res + s[i].lower()
        else:
            res = res + s[i].upper()
    return res

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)