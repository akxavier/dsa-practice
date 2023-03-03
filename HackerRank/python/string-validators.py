if __name__ == '__main__':
    s = input()
    
    flags = [0, 0, 0, 0, 0]
    s = list(s)
    
    for i in range(len(s)):
        if s[i].isalnum():
            if flags[0] == 0:
                flags[0] = 1
            
            if s[i].isdigit():
                if flags[2] == 0:
                    flags[2] = 1
            else:
                if flags[1] == 0:
                    flags[1] = 1
                if s[i].islower():
                    flags[3] = 1
                else:
                    flags[4] = 1
                    
        if 0 not in flags:
            break;
        
    for i in range(5):
        if flags[i] == 1:
            print("True")
        else:
            print("False")