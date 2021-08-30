A, B, C = input().split()
D = int(input())
A = int(A)
B = int(B)
C = int(C)

H = A  #현재 시간(시)
M = B  #현재 시간(분)
S = C + D  #현재 시간(초) + 필요한 시간(초)

if S >= 60:
	M += S // 60
	S = S % 60

if M >= 60:
    H += M // 60
    M = M % 60

if H >= 24:
    H = H % 24
  
print('%s %s %s'%(H, M, S))
