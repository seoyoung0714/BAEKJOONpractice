# 3052
# 나머지
# Python
# 첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력하시오.

remain = []

for i in range(10):
    num = int(input())
    remain.append(num % 42)
remain = set(remain)
print(len(remain))
