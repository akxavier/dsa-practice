if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    arr = list(arr)
    arr.sort(reverse=True)
    maxval = arr[0]
    for i in range(1,len(arr)):
        if arr[i] < maxval:
            print(arr[i])
            break