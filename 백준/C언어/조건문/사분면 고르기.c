// 14681
// 사분면 고르기
// C언어
// 점 (x, y)의 사분면 번호 (1, 2, 3, 4 중 하나)를 출력하시오.

#include <stdio.h>

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1");
	else if (x < 0 && y > 0)
		printf("2");
	else if (x < 0 && y < 0)
		printf("3");
	else if (x > 0 && y < 0)
		printf("4");

	return 0;

}
