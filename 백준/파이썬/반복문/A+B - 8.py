# 11022
# A+B - 8
# Python
# 각 테스트 케이스마다 "Case #x: A + B = C" 형식으로 출력하시오.

T = int(input())

for i in range(T):
    A, B = map(int, input().split())
    print("Case #%d: %d + %d = %d" % (i + 1, A, B, A + B))
