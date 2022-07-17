# 10871
# X보다 작은 수
# Python
# X보다 작은 수를 입력받은 순서대로 공백으로 구분해 출력하시오.

N, X = map(int, input().split())
A = list(map(int, input().split()))

for i in A:
    if i < X:
        print(i, end=" ")
