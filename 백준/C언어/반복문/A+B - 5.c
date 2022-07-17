// 10952
// A+B - 5
// C언어
// 각 테스트 케이스마다 A+B를 출력하시오.

#include <stdio.h>

int main(void)
{
	int A, B;

	while (1)
	{
		scanf("%d %d", &A, &B);

		if (A == 0 && B == 0)
			break;
		else
			printf("%d\n", A + B);
	}

	return 0;
}
