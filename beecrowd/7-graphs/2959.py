from queue import Empty


def look_for(visited, next_doors, L):
    nds = []
    for next in next_doors:
        if next == L:
            print('Lets que lets')
            return True
        elif not(next in visited):
            visited += [next]
            for road in lib:
                if road[0] == next:
                    nds.append(road[1])
            if look_for(visited, nds, L) == True:
                return True
        else:
            pass

    if nds is Empty:
        print('Deu ruim')
    return False
            
line = input().split(' ')
N = int(line[0])
M = int(line[1])
P = int(line[2])
bairros = []
lib = []
while(M>0):
    line = input().split(' ')
    A = int(line[0])
    B = int(line[1])
    bairros += [A, B]
    lib.append((A,B))
    lib.append((B,A))
    M -= 1
bairros = set(bairros)
while(P>0):
    line = input().split(' ')
    K = int(line[0])
    L = int(line[1])
    if K in bairros and L in bairros:
        if (K,L) in lib or (L,K) in lib:
            print('Lets que lets')
        else:
            next_doors = []
            for road in lib:
                if road[0] == K:
                    next_doors.append(road[1])
            look_for([K], next_doors, L)
    else:
        print('Deu ruim') 
    P -= 1