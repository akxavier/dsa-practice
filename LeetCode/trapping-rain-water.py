def trap(height: list[int]) -> int:
    # creating an array that stores max upcoming height
    n = len(height)
    maxheight = height[-1]
    upcoming_max = [0]
    for i in range(n - 2, -1, -1):
        upcoming_max.append(maxheight)
        if height[i] > maxheight:
            maxheight = height[i]
    upcoming_max = upcoming_max[::-1]

    water = 0
    l = 0

    while l < n - 2:
        while l < n - 2 and height[l] <= height[l + 1]:
            l += 1
        if l == n - 2:
            return water

        if height[l] > upcoming_max[l]:
            while l < n - 2 and height[l + 1] > upcoming_max[l + 1]:
                l += 1
            if l == n - 2:
                return water

            r = l + 1
            while height[r] < upcoming_max[l]:
                water += upcoming_max[l] - height[r]
                r += 1
            l = r
        else:
            r = l + 1
            while height[r] < height[l]:
                water += height[l] - height[r]
                r += 1
            l = r
    return water
