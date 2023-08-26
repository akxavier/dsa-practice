"""
Given a matrix where '#' represents a door, '*' represents a wall, '.' represents free passage. 
You are given two VR glasses to play game. Objective of game is to reach bottom right corner of matrix from top left corner. 
The first glass allows you to walk through doors and the second glass allows you to walk through walls.
From a cell in the matrix, you can either move one cell down or right and each such movement takes 1 min. Write a program to output the min. time required to complete the game using the two glasses. If the game cannot be finished with a particular glass, print -1 for that glass.
"""

mat = ['....*',
       '****.',
       '.....',
       '.##.#',
       '.....']

n, m = len(mat), len(mat[0])

res = [[[None, None] for _ in range(m)] for _ in range(n)]
res[n - 1][m - 1] = [0, 0]

for i in range(n - 1, -1, -1):
    for j in range(m - 1, -1, -1):
        if i == n - 1 and j == m - 1:
            continue

        curr = mat[i][j]
        doorG, wallG = None, None
        if curr == '*':
            doorG = -1
        elif curr == '#':
            wallG = -1

        if not doorG:
            right_doorG, down_doorG = -1, -1
            if j < m - 1:
                right_doorG = res[i][j + 1][0]
            if i < n - 1:
                down_doorG = res[i + 1][j][0]

            if right_doorG == -1 and down_doorG == -1:
                doorG = -1
            elif right_doorG == -1:
                doorG = 1 + down_doorG
            elif down_doorG == -1:
                doorG = 1 + right_doorG
            else:
                doorG = 1 + min(right_doorG, down_doorG)

        if not wallG:
            right_wallG, down_wallG = -1, -1
            if j < m - 1:
                right_wallG = res[i][j + 1][1]
            if i < n - 1:
                down_wallG = res[i + 1][j][1]

            if right_wallG == -1 and down_wallG == -1:
                wallG = -1
            elif right_wallG == -1:
                wallG = 1 + down_wallG
            elif down_wallG == -1:
                wallG = 1 + right_wallG
            else:
                wallG = 1 + min(right_wallG, down_wallG)

        res[i][j] = [doorG, wallG]

print(res[0][0][0], res[0][0][1])

# for row in res:
#    print(row)
