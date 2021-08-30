A, B = input().split()
C = int(input())
A = int(A)
B = int(B)

H = A  #현재 시간(시)
M = B + C  #현재 시간(분) + 필요한 시간(분)

if M >= 60:
  H += M // 60
  M = M % 60

if H >= 24:
  H = H % 24
  
print('%s %s'%(H, M)
