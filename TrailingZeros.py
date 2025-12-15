import math
n = int(input())
'''
two_count = 0
five_count = 0
for element in range(1,n+1):
    while element % 2 == 0:
        two_count += 1
        element //= 2
    while element % 5 == 0:
        five_count += 1
        element //= 5
print(min(two_count, five_count))
'''
#20 = 1x2x3x4x5x6x7x8x9x10(2x5)x11x12x13x14x15(3x5)x16x17x18x19x20(2x2x5)
#we know that the number of two s will be less than the number of five s, just because two will appear in every 2 steps
#while 5 will appear after every 5 steps
#we can show 10 as 2x5, which adds a trailing zero to our current result, like this one
#like this one whenever we see a number that is divisible by 5 it means that we can construct, basically multiply it with 2
#to make it 10 which adds another trailing zero to our number
#to conclude, we just need to count how many 5



#1 ... 5 ... 10 15 20  ... 25 ... 30 35 40  40 45 50 55 60 65 70 75 80 ... 125 ... 130 135 140 145 150  ... 625 ... x

if n < 5:
    print(0)
    exit(0)
count = 0
count += n // 5
temp = 25
while temp <= n:
    count += (n // temp)
    temp *= 5
print(count)


