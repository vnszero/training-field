s = 0.0
i=1.0
k=1.0
while(i<40):
    s += i/k;
    k*=2
    i+=2
print("{:.2f}".format(s))