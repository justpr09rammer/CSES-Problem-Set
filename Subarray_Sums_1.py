n, x = map(int, input().split())
array = list(map(int, input().split()))
my_sum = 0
left = 0
right = 0
result = 0
while right <= n and left < n:
    if my_sum < x and right < n:
        my_sum += array[right]
        right += 1
    else :
        my_sum -= array[left]
        left += 1
    if my_sum == x:
        result += 1
print(result)