n = int(input())
array = list(map(int, input().split()))
sum_array = sum(array)
matrix = [[]]
result = sum_array
for element in array:
    temp_matrix = [row.copy() for row in matrix]
    for arr in temp_matrix:
        arr.append(element)
    matrix.extend(temp_matrix)
for arr in matrix:
    sum_array_temp = sum(arr)
    result = min(result, abs(sum_array - 2 * sum_array_temp))
print(result)