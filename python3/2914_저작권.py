a, i = input().split()
a = int(a)  #곡의 개수
i = int(i)  #평균값

if i == 1:
	print(i)

else:
	r = a * (i - 1) + 1
	print(r)
