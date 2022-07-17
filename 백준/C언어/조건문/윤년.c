// 2753
// 윤년
// C언어
// 첫째 줄에 윤년이면 1, 아니면 0을 출력하시오.

#include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);

	if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
		printf("1");
	else
		printf("0");

	return 0;
}
