// 2577
// 숫자의 개수
// C언어
// 첫째 줄에는 AxBxC의 결과에 0이 몇 번 쓰였는지 출력하시오. 마찬가지로 둘째 줄부터 열 번째 줄까지 AxBxC의 결과에 1부터 9까지의 숫자가 각각 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력하시오.

#include <stdio.h>

int main(void)
{
	int A, B, C;
	int value, count;
	int num[10] = { 0, };

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	value = A * B * C;

	while (value > 0)
	{
		count = value % 10;
		num[count] += 1;
		value = value / 10;
	}

	for (int j = 0; j < 10; j++)
	{
		printf("%d\n", num[j]);
	}

	return 0;
}