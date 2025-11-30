n, m, k = map(int, input().split())

applicants = []
apartments = []

applicants = list(map(int, input().split()))
apartments = list(map(int, input().split()))

apartments.sort()
applicants.sort()

applicants_pointer = 0
apartments_pointer = 0
count = 0

while applicants_pointer < len(applicants) and apartments_pointer < len(apartments):
    if abs(applicants[applicants_pointer] - apartments[apartments_pointer]) <= k:
        count += 1
        applicants_pointer += 1
        apartments_pointer += 1
    elif (applicants[applicants_pointer] - apartments[apartments_pointer]) > 0:
        apartments_pointer += 1
    elif (apartments[apartments_pointer] - applicants[applicants_pointer]) > 0:
        applicants_pointer += 1
print(count)
