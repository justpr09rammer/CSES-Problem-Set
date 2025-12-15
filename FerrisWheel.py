n, x = list(map(int, input().split()))
children_weights = list(map(int, input().split()))
children_weights.sort()

left_pointer = 0
right_pointer = n-1
the_number_of_gondolas = 0
while left_pointer <= right_pointer:
    # if left_pointer == right_pointer:
    #     left_pointer += 1
    #     right_pointer -= 1
    #     the_number_of_gondolas += 1
    #     break
    if children_weights[left_pointer] + children_weights[right_pointer] <= x:
        the_number_of_gondolas += 1
        left_pointer += 1
        right_pointer -= 1
    else:
        the_number_of_gondolas += 1
        right_pointer -= 1
print(the_number_of_gondolas)
