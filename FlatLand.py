t = int(input())
for i in range(t):
    n = int(input())
    c = 0
    while n > 0:
        s = int(n ** (1/2))
        n = n - (s ** 2)
        c += 1
    print(c)