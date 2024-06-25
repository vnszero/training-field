N = int(input())
pokedex = set()
for i in range(N):
    pokemon = input()
    pokedex.add(pokemon)

print("Falta(m) {} pomekon(s).".format(151 - len(pokedex)))
