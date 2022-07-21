# 8958
# OX퀴즈
# Python
# 각 테스트 케이스마다 점수를 출력하시오.

T = int(input())
sums = []

for i in range(T):
    sum = 0
    score = 1
    ox = list(input())
    for i in ox:
        if i == 'O':
            sum += score
            score += 1
        elif i == 'X':
            score = 1
    sums.append(sum)

for i in range(T):
    print(sums[i])