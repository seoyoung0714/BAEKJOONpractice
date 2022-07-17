// 2741
// N 찍기
// C언어
// 첫째 줄부터 N번째 줄까지 차례대로 출력하시오.

#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		printf("%d\n", i);

	return 0;
}