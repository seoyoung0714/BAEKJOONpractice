# 1546
# 평균
# Python
# 첫째 줄에 새로운 평균을 출력하시오.

N = int(input())
score = list(map(int, input().split()))
M = max(score)

for i in range(N):
    score[i] = (score[i] / M) * 100
print("%f" %(sum(score) / N))