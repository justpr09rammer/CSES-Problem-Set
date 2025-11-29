import math
n = int(input())
array = []
total_Sum = 0
array = list(map(int, input().split()))
total_Sum = sum(array)
matrix = [[]]
for element in array:
    temp_matrix = [row.copy() for row in matrix]

    for row in temp_matrix:
        row.append(element)
    matrix.extend(temp_matrix)
result = math.inf
for row in matrix:
    sum1 = sum(row)
    sum2 = total_Sum - sum1
    result = min(result, abs(sum1 - sum2))

print(result)