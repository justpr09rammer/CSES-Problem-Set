n = int(input())
m = n * (n + 1) // 2
if m % 2 != 0:
    print("NO")
else:
    set1 = set()
    set2 = set()
    target = int(m / 2)
    my_sum = 0
    while my_sum + n < target:
        set2.add(n)
        my_sum += n
        n -= 1
    difference = target - my_sum
    set2.add(difference)
    while n > 0:
        set1.add(n)
        n -= 1
    set1.remove(difference)
    print("YES")
    print(len(set1))
    print(*set1)
    print(len(set2))
    print(*set2)


