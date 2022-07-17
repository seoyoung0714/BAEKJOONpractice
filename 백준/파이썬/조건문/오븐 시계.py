# 2525
# 오븐 시계
# Python
# 첫째 줄에 종료되는 시간의 시와 분을 공백을 사이에 두고 출력하시오.

A, B = input().split()
C = int(input())
A = int(A)
B = int(B)

totalM = A * 60 + B + C

if totalM >= 24 * 60:
    totalM = totalM - 24 * 60
    print("%d %d" % (totalM / 60, totalM % 60))
else:
    print("%d %d" % (totalM / 60, totalM % 60))
