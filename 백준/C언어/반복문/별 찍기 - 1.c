// 2438
// 별 찍기 - 1
// C언어
// 첫째 줄부터 N번째 줄까지 차례대로 별을 출력하시오.

#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
