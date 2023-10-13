base = {
    'A' : 0,
    'B' : 1,
    'C' : 2,
    'D' : 3,
    'E' : 4,
    'F' : 5,
    'G' : 6,
    'H' : 7,
    'I' : 8,
    'J' : 9,
    'K' : 10,
    'L' : 11,
    'M' : 12,
    'N' : 13,
    'O' : 14,
    'P' : 15,
    'Q' : 16,
    'R' : 17,
    'S' : 18,
    'T' : 19,
    'U' : 20,
    'V' : 21,
    'W' : 22,
    'X' : 23,
    'Y' : 24,
    'Z' : 25
}
while(1):
    try:
        line = input()
        value = 0
        for i in range(len(line)-1,0,-1):
            value += (base[line[i-1]]) + (26**(i-1))
            print(i)
            if i>3:
                value = 736
            if base[line[i-1]] > 23 and i == 3:
                value = 736
                break
            if value > 735:
                break
        if value > 735:
            print("Essa coluna nao existe Tobias!")
        else:
            print(value)
    except:
        break