from datetime import date

today = date.today() #오늘날짜 가져오기
y = today.year
m = today.month
d = today.day

d1 = date(y,m,d)  #d1에 오늘날짜 저장
print(date.isoformat(d1)) #'yyyy-mm-dd'형식으로 출력
