// 11022
// A+B - 8
// C언어
// 각 테스트 케이스마다 "Case #x: A + B = C" 형식으로 출력하시오.

#include <stdio.h>

int main(void)
{
	int T, A, B;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
	}

	return 0;
}