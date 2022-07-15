// 10926
// ??!
// C언어
// 첫째 줄에 준하의 놀람을 출력하시오. 놀람은 아이디 뒤에 ??!를 붙여서 나타낸다.

#include <stdio.h>

int main(void)
{
	char id[51];
	scanf("%s", &id);

	printf("%s??!\n", id);

	return 0;
}