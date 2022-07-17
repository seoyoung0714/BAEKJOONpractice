// 2739
// 구구단
// C언어
// 출력형식과 같게 N*1부터 N*9까지 출력하시오.

#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", N, i, N * i);

	return 0;
}