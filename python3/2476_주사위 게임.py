n = int(input())

MAX = 0

for i in range(n):
    dice = list(map(int,input().split()))
    if dice.count(dice[0]) == 3:
        ans = 10000 + dice[0] * 1000
    elif dice.count(dice[0]) == 2:
        ans = 1000 + dice[0] * 100
    elif dice.count(dice[1]) == 2:
        ans = 1000 + dice[1] * 100
    elif dice.count(dice[0]) == 1 and dice.count(dice[1]) == 1:
        ans =  max(dice) * 100
    
    if MAX < ans:
        MAX = ans

print(MAX)