grade = input()

if grade[0] == 'A':
    if grade[1] == '+':
        score = 4.3
    elif grade[1] == '0':
        score = 4.0
    else:
        score = 3.7

elif grade[0] == 'B':
    if grade[1] == '+':
        score = 3.3
    elif grade[1] == '0':
        score = 3.0
    else:
        score = 2.7

elif grade[0] == 'C':
    if grade[1] == '+':
        score = 2.3
    elif grade[1] == '0':
        score = 2.0
    else:
        score = 1.7

elif grade[0] == 'D':
    if grade[1] == '+':
        score = 1.3
    elif grade[1] == '0':
        score = 1.0
    else:
        score = 0.7

else:
    score = 0.0

print(score)
