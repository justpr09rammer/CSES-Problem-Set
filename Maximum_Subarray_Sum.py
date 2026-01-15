import math

n = int(input())
array = list(map(int, input().split()))
result = 0
my_sum = 0
neg = -math.inf
positive_element = False
negative_element = False
for element in array:
    if my_sum + element > 0:
        positive_element = True
        my_sum += element
        result = max(result, my_sum)
    else:
        my_sum = 0
    if element < 0:
        neg = max(neg, element)
        negative_element = True
if negative_element == False and positive_element == False:
    print(0)
elif positive_element == False and negative_element == True:
    print(neg)
else :
    print(result)
