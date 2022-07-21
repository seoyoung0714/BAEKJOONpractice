# 2577
# 숫자의 개수
# Python
# 첫째 줄에는 AxBxC의 결과에 0이 몇 번 쓰였는지 출력하시오.
# 마찬가지로 둘째 줄부터 열 번째 줄까지 AxBxC의 결과에 1부터 9까지의 숫자가 각각 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력하시오.

A = int(input())
B = int(input())
C = int(input())
value = A * B * C
num = list(str(value))

for i in range(10):
    print(num.count(str(i)))
