# 15552
# 빠른 A+B
# Python
# 각 테스트 케이스마다 A+B를 한 줄에 하나씩 순서대로 출력하시오.

import sys
T = int(sys.stdin.readline())

for i in range(T):
    A, B = map(int, sys.stdin.readline().split())
    print(A + B)
