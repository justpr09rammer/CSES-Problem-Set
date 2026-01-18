n = int(input())
array = list(map(int, input().split()))
my_set = set()
result = 1
left = 0
right = 1
my_set.add(array[0])
while (right < n):
    if not my_set.__contains__(array[right]):
        my_set.add(array[right])
        result = max(result, right - left + 1)
        right += 1
    else:
        my_set.remove(array[left])
        left += 1
print(result)