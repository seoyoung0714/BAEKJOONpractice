# 2480
# 주사위 세개
# Python
# 첫째 줄에 게임의 상금을 출력하시오.

a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)

if a == b and b == c:
    print(10000 + a * 1000)
elif a == b and a != c:
    print(1000 + a * 100)
elif a == c and a != b:
    print(1000 + a * 100)
elif b == c and b != a:
    print(1000 + b * 100)
else:
    print(100 * max(a, b, c))
