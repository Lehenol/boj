#최소공배수(LCM) = 두 자연수의 곱 / 최소공약수(GCD)
t = int(input())

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

for i in range(t):
    a, b = map(int, input().split())
    lcm = a * b / gcd(a, b)
    print("%d"%(lcm))
