N = int(input())
k=0
while(k<N):
    line = input()
    if '+' in line:
        a,b = line.split('+')
        a = int(a)
        b = int(b)
        print(a+b)
    else:
        print('skipped')
    k+=1