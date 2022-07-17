# 2884
# 알람 시계
# Python
# 첫째 줄에 상근이가 창영이의 방법을 사용할 때, 설정해야 하는 알람 시간을 출력하시오.

H, M = input().split()
H = int(H)
M = int(M)

if M >= 45:
    print(H, M - 45)
else:
    if H == 0:
        print(23, 60 - (45 - M))
    elif H > 0:
        print(H - 1, 60 - (45 - M))