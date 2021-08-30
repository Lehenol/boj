'''
# 1차 시도
a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())

def giveBack(score):
    if score < 40:
        return 40
    else:
        return score

avg = (giveBack(a)+giveBack(b)+giveBack(c)+giveBack(d)+giveBack(e))//5
print(avg)
'''

# 2차 시도
n = 0

for i in range(5):
    a = int(input())
    if a < 40:
        a = 40
    n += a
print(n // 5)
    
