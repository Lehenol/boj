T = int(input())
result = list()

for i in range(T):
    e = input().split()
    n = float(e.pop(0))
    for j in e:
        if j == '@':
            n *= 3
        elif j == '%':
            n += 5
        elif j == '#':
            n -= 7
    result.append(n)

for i in range(T):
    print('%.2f' % result[i])
