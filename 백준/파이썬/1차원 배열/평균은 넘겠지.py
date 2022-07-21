# 4344
# 평균은 넘겠지
# Python
# 각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력하시오.

C = int(input())
rate = []

for i in range(C):
    score = list(map(int, input().split()))
    avg = sum(score[1:]) / score[0]
    over = 0
    for i in range(score[0] + 1):
        if score[i] > avg:
            over += 1
    rate.append(over / score[0] * 100)

for i in range(C):
    print("%.3f%%" % (rate[i]))
