N = int(input())
for i in range(N):
    x, y = input().split(' ')
    x = int(x)
    y = int(y)

    rxy = (3*x)**2 + y**2
    bxy = 2*(x**2) + (5*y)**2
    cxy = -100*x + y**3

    if rxy > bxy and rxy > cxy:
        print('Rafael ganhou')
    elif bxy > rxy and bxy > cxy:
        print('Beto ganhou')
    else:
        print('Carlos ganhou')