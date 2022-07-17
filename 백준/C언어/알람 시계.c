// 2884
// 알람 시계
// C언어
// 첫째 줄에 상근이가 창영이의 방법을 사용할 때, 설정해야 하는 알람 시간을 출력하시오.

#include <stdio.h>

int main(void)
{
	int H, M;
	scanf("%d %d", &H, &M);

	if (M >= 45)
		printf("%d %d", H, M - 45);
	else
	{
		if (H == 0)
			printf("23 %d", 60 - (45 - M));
		else if (H > 0)
			printf("%d %d", H - 1, 60 - (45 - M));
	}

	return 0;
}