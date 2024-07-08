# 12000 units -> 1 kg
# beans_units -> beans_mass
N = int(input())
for i in range(N):
    X = int(input())
    beans_unities = (2**X) - 1
    beans_mass = beans_unities//12000
    print("{} kg".format(beans_mass))
    