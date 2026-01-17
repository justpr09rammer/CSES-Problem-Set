n = int(input())
array = list(map(int, input().split()))
array_sum = sum(array)
my_sum = n * (n + 1) // 2
print(my_sum - array_sum)
