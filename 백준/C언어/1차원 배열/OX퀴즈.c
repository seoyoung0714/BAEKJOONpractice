// 8958
// OX퀴즈
// C언어
// 각 테스트 케이스마다 점수를 출력하시오.

#include <stdio.h>
#include <string.h>

int main(void)
{
	int T;
	int sum, score;
	char ox[80];
	int sums[80];

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		sum = 0;
		score = 1;
		scanf("%s", ox);
		for (int j = 0; j < strlen(ox); j++)
		{
			if (ox[j] == 'O')
			{
				sum += score;
				score++;
			}
			if (ox[j] == 'X')
				score = 1;
		}
		sums[i] = sum;
	}
	for (int k = 0; k < T; k++)
		printf("%d\n", sums[k]);

	return 0;
}
