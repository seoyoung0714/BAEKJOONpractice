// 1008
// A/B
// C언어
// 첫째 줄에 A/B를 출력하시오.

#include <stdio.h>

int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);

	printf("%.9f\n", (double) A / B);

	return 0;
}
