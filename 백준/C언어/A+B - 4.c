// 10951
// A+B - 4
// C언어
// 각 테스트 케이스마다 A+B를 출력하시오.

#include <stdio.h>

int main(void)
{
	int A, B;

	while (scanf("%d %d", &A, &B) == 2)
		printf("%d\n", A + B);

	return 0;
}