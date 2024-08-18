import math

def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

cached_factorials = {0: 1, 1: 1}

def factorial(n):
    if n in cached_factorials:
        return cached_factorials[n]
    
    max_cached = max(cached_factorials)
    result = cached_factorials[max_cached]
    
    for i in range(max_cached + 1, n + 1):
        result *= i
        cached_factorials[i] = result
    
    return result

N = int(input())
row = map(int, input().split())

for value in row:
    if is_prime(value):
        print(f"{value}! = {factorial(value)}")
