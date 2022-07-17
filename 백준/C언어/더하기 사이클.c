// 1110
// 더하기 사이클
// C언어
// 첫째 줄에 N의 사이클 길이를 출력하시오.

#include <stdio.h>

int main(void)
{
	int startN, N, sum, newN = -1, count = 0;
	scanf("%d", &startN);

	N = startN;

	while (startN != newN)
	{
		sum = N / 10 + N % 10;
		newN = (N % 10) * 10 + sum % 10;
		N = newN;
		count++;
	}
	printf("%d", count);

	return 0;
}