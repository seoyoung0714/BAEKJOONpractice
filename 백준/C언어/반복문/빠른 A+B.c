// 15552
// 빠른 A+B
// C언어
// 각 테스트 케이스마다 A+B를 한 줄에 하나씩 순서대로 출력하시오.

#include <stdio.h>

int main(void)
{
	int T, A, B;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}
