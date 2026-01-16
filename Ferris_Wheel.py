n, weight = map(int, input().split())
array = list(map(int, input().split()))
array.sort()
left_pointer = 0
right_pointer = n - 1
number_of_gondolas = 0
while (left_pointer <= right_pointer):
    if(array[left_pointer] + array[right_pointer] <= weight):
        left_pointer += 1
        right_pointer -= 1
    else:
        right_pointer -= 1
    number_of_gondolas += 1
print(number_of_gondolas)