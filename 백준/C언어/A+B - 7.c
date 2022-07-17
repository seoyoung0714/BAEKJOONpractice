// 11021
// A+B - 7
// C언어
// 각 테스트 케이스마다 "Case #x: "를 출력한 다음, A+B를 출력하시오.

#include <stdio.h>

int main(void)
{
	int T, A, B;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n", i, A + B);
	}

	return 0;
}