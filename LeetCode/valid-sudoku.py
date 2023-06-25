board = [[".", ".", "5", ".", ".", ".", ".", ".", "."],
         [".", ".", ".", "8", ".", ".", ".", "3", "."],
         [".", "5", ".", ".", "2", ".", ".", ".", "."],
         [".", ".", ".", ".", ".", ".", ".", ".", "."],
         [".", ".", ".", ".", ".", ".", ".", ".", "9"],
         [".", ".", ".", ".", ".", ".", "4", ".", "."],
         [".", ".", ".", ".", ".", ".", ".", ".", "7"],
         [".", "1", ".", ".", ".", ".", ".", ".", "."],
         ["2", "4", ".", ".", ".", ".", "9", ".", "."]]


def isValidSudoku(board: list[list[str]]) -> bool:
    for i in range(9):
        for j in range(9):
            val = board[i][j]
            if val == '.':
                continue
            # check row
            for m in range(j + 1, 9):
                if (board[i][m] == val):
                    return False

            # check column
            for m in range(i + 1, 9):
                if (board[m][j] == val):
                    return False

            # check box
            end_i = i + (2 - i % 3)
            end_j = j + (2 - j % 3)
            for m in range(i + 1, end_i + 1):
                for n in range(j - (j % 3), end_j + 1):
                    if n != j and board[m][n] == val:
                        return False

    return True


print(isValidSudoku(board))
