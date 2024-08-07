import math

def fibonacci(x:int) -> int:
    font1 = (1 + math.sqrt(5))/2
    font2 = (1 - math.sqrt(5))/2
    part1 = 1
    part2 = 1
    for i in range(x):
        part1 *= font1
        part2 *= font2    
    return (part1 - part2) / math.sqrt(5)

T = int(input())
for j in range(T):
    N = int(input())
    print("Fib({}) = {:.0f}".format(N, fibonacci(N)))