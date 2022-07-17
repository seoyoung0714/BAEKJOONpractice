// 9498
// 시험 성적
// C언어
// 시험 성적을 출력하시오.

#include <stdio.h>

int main(void)
{
	int score;
	scanf("%d", &score);

	score = score / 10;

	switch (score)
	{
	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
		break;
	}

	return 0;
}