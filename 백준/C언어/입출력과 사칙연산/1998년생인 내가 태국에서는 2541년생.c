// 18108
// 1998년생인 내가 태국에서는 2541년생?!
// C언어
// 불기 연도를 서기 연도로 변환한 결과를 출력하시오.

#include <stdio.h>

int main(void)
{
	int BE, AD;
	scanf("%d", &BE);

	AD = BE - (2541 - 1998);

	printf("%d\n", AD);

	return 0;
}
