# 11021
# A+B - 7
# Python
# 각 테스트 케이스마다 "Case #x: "를 출력한 다음, A+B를 출력하시오.

T = int(input())

for i in range(T):
    A, B = map(int, input().split())
    print("Case #%d: %d" % (i + 1, A + B))