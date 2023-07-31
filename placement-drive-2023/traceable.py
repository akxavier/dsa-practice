matrix = [[1, 0, 4],
          [3, 2, 9],
          [6, 10, 2],
          [21, 3, 12]]


def sortColumn(matrix, k):
    # Suppose we are sorting according to column 2 value
    # Sort the rows by Insertion Sort by taking the column 2 value as key
    # for i = 1 to n - 1, where i is the no. of the row, take col 2 value as key for row[i]
    # then keep shifting row[i] upwards till col 2 value of row[i - 1] is less than that of row[i]

    n = len(matrix)
    heap = []
    for i in range(n):
        row = matrix[i]
        hq.heappush(heap, (row[k], row))

    sorted_matrix = []
    while heap:
        _, row = hq.heappop(heap)
        sorted_matrix.append(row)

    return sorted_matrix


matrix1 = sortColumn(matrix, 1)
for row in matrix1:
    print(row)


# n = 7 sqrt(n) = 2 = 3
# a + b = 3 and a - b = 3 --> product = 9
# a + b = 4 and a - b = 2 --> product = 8
# a + b = 5 and a - b = 1
