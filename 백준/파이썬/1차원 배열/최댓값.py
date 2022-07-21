# 2562
# 최댓값
# Python
# 첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 몇 번째 수인지를 출력하시오.

arr = []

for i in range(9):
    arr.append(int(input()))
print(max(arr))
print(arr.index(max(arr)) + 1)
