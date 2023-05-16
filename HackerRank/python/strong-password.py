def minimumNumber(n, password):
    flags = [0, 0, 0, 0]
    
    for i in set(password):
        if 0 not in flags:
            break
        if i in "0123456789":
            flags[0] = 1
        elif i in "abcdefghijklmnopqrstuvwxyz":
            flags[1] = 1
        elif i in "ABCDEFGHIJKLMNOPQRSTUVWXYZ":
            flags[2] = 1
        elif i in "!@#$%^&*()-+":
            flags[3] = 1
            
    p = flags.count(0)
    
    if n < 6 and n + p >= 6:
        return p
    elif n < 6 and n + p < 6:
        return 6 - n
    else:
        return p
            
if __name__ == '__main__':
    n = int(input())
    password = input()

    print(minimumNumber(n, password))