// 1330
// 두 수 비교하기
// C언어
// 첫째 줄에 세 가지 경우 중 하나를 출력하시오.

#include <stdio.h>

int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);

	if (A > B)
		printf(">");
	else if (A < B)
		printf("<");
	else
		printf("==");

	return 0;
}
