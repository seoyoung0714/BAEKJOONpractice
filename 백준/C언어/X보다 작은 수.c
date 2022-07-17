// 10871
// X보다 작은 수
// C언어
// X보다 작은 수를 입력받은 순서대로 공백으로 구분해 출력하시오.

#include <stdio.h>

int main(void)
{
	int N, X, A;
	scanf("%d %d", &N, &X);

	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &A);

		if (A < X)
			printf("%d ", A);
	}

	return 0;
}