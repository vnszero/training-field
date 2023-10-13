N = int(input())
names = []
i = 0
while i < N:
    try:
        name = input()
    except:
        break
    if name == '' or name == '\n' or name == '\r' or name =='\t':
        i -= 1
    else:
        names.append(name)
names.sort()
for name in names:
    print(name)