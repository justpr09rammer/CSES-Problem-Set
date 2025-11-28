n = int(input())
totalSum = n * (n + 1) // 2
if (totalSum % 2 != 0):
    print("NO")
else:
    set1 = set()
    set2 = set()
    sum = 0
    i = 1
    target = totalSum // 2
    while (sum < target):
        set1.add(i)
        sum += i
        i += 1
    difference = sum - target
    if (difference != 0):
        set1.remove(difference)
        set2.add(difference)
    while (i <= n):
        set2.add(i)
        i += 1
    print("YES")
    print(len(set1))
    print(*set1)
    print(len(set2))
    print(*set2)

