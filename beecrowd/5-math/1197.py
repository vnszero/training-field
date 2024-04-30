while True:
    try:
        v, t = input().split(' ')
        v = float(v)
        t = float(t)
        s = 2*v*t
        print(int(s))
    except EOFError:
        break 