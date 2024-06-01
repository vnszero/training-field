N, L, Q = input().split()
names = input().split()
N = int(N)
L = float(L)
Q = float(Q)
times = int(L/Q)
if L - times*Q:
    print("{} {:.1f}".format(names[times%N], L - times*Q))
else:
    print("{} {:.1f}".format(names[(times-1)%N], Q))