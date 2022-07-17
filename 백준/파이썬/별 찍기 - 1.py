# 2438
# 별 찍기 - 1
# Python
# 첫째 줄부터 N번째 줄까지 차례대로 별을 출력하시오.

N = int(input())

for i in range(N):
    for j in range(i + 1):
        print("*", end="")
    print("")