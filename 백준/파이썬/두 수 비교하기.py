# 1330
# 두 수 비교하기
# Python
# 첫째 줄에 다음 세 가지 중 하나를 출력하시오.

A, B = input().split()
A = int(A)
B = int(B)

if A > B:
    print(">")
elif A < B:
    print("<")
else:
    print("==")