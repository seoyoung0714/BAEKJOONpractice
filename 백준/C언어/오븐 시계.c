// 2525
// 오븐 시계
// C언어
// 첫째 줄에 종료되는 시각의 시와 분을 공백을 사이에 두고 출력하시오.

#include <stdio.h>

int main(void)
{
	int A, B, C, totalM;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	totalM = A * 60 + B + C;

	if (totalM >= 24 * 60)
	{
		totalM = totalM - 24 * 60;
		printf("%d %d", totalM / 60, totalM % 60);
	}
	else
		printf("%d %d", totalM / 60, totalM % 60);

	return 0;
}