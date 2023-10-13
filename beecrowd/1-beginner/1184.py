sum = 0
option = input()
elements = 0
for i in range(12):
    for j in range(12):
        number = float(input())
        if (i + j > 11 and i < j):
            sum += number
            elements += 1
if option == 'M':
    sum /= elements
print('{:.1f}'.format(sum))
