import math
n, t = map(int, input().split())
array = list(map(int, input().split()))
min_element = math.inf
max_element = -1 * math.inf
for element in array:
    if min_element > element:
        min_element = element
    elif max_element < element:
        max_element = element

left = 0
right = min_element * t

result = math.inf
while (left <= right):
    mid = left + (right - left) // 2
    count = 0
    for machine in array:
        count += mid // machine
        if count >= t:
            result = min(result, mid)
            break
    if (count < t):
        left = mid + 1
    else:
        right = mid - 1
print(result)
