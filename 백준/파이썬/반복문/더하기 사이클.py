# 1110
# 더하기 사이클
# Python
# 첫째 줄에 N의 사이클 길이를 출력하시오.

newN = -1
count = 0
startN = int(input())
N = startN

while startN != newN:
    sum = N // 10 + N % 10
    newN = (N % 10) * 10 + sum % 10
    N = newN
    count += 1
print(count)
