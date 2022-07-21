# 10818
# 최소, 최대
# Python
# 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력하시오.

N = int(input())
num = list(map(int, input().split()))
print(min(num), max(num))
