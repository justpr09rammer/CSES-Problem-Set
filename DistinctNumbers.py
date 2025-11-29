n = int(input())
numbers = list(map(int, input().split()))
set1 = set()
for number in numbers:
    set1.add(number)
print(len(set1))