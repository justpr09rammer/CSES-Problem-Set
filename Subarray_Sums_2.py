import sys
n, x = map(int, sys.stdin.readline().split())
array = list(map(int, sys.stdin.readline().split()))
prefix_sum = 0
my_map = {0: 1}
result = 0

for element in array:
    prefix_sum += element

    if prefix_sum - x in my_map:

        result += my_map[prefix_sum - x]

    my_map[prefix_sum] = my_map.get(prefix_sum, 0) + 1
print(result)