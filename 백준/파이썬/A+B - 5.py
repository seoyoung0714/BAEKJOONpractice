# 10952
# A+B - 5
# Python
# 각 테스트 케이스마다 A+B를 출력하시오.

while True:
    A, B = map(int, input().split())
    if A == 0 and B == 0 :
        break
    else:
        print(A + B)