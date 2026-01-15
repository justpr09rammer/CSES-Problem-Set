n = int(input())
array = list(map(int, input().split()))
array.sort()
median = array[len(array) // 2]
my_sum = 0
for element in array:
    my_sum +=abs((element - median))
print(my_sum)