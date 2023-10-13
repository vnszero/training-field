passos = ['0','0']
for i in range(3):
    passos.append(input())

for i in range(2,5,1):
    print(passos[i],end='')
print()

print(passos[3]+passos[4]+passos[2])

print(passos[4]+passos[2]+passos[3])

for i in range(2,5,1):
    print(passos[i][:10],end='')
print()