while True:
    try:
        a, b = input().split()
        a = int(a)
        b = int(b)
        print(abs(a-b))
    except EOFError:
        break