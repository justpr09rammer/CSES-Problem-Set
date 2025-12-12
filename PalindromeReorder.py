
s = input()
freq = [0] * 26
stack = []
for ch in s:
    freq[ord(ch) - ord('A')] += 1
oddCharCount = 0
oddChar = ''
s1 = ""
for i in range(26):
    if freq[i] % 2 == 1:
        oddCharCount += 1
        oddChar = chr(ord('A') + i)
    if oddCharCount > 1:
        print("NO SOLUTION")
        exit()
    s1 += chr(ord('A') + i) * (freq[i] // 2)
    stack.append(chr(ord('A') + i) * (freq[i] // 2))

if oddCharCount == 1:
    s1 += oddChar

while len(stack) > 0:
    s1 += stack.pop()

print(s1)
