// 4344
// 평균은 넘겠지
// C언어
// 각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력하시오.

#include <stdio.h>

int main(void)
{
	int C;
	int N;
	int score[1000];
	int sum;
	int avg;
	int over;
	double rate[100];

	scanf("%d", &C);

	for (int i = 0; i < C; i++)
	{
		scanf("%d", &N);

		sum = 0, avg = 0, over = 0;

		for (int j = 0; j < N; j++)
		{
			scanf("%d", &score[j]);
			sum += score[j];
		}
		avg = (double)sum / N;
		for (int k = 0; k < N; k++)
		{
			if (score[k] > avg)
				over++;
		}
		rate[i] = ((double)over / N) * 100;
	}
	for (int l = 0; l < C; l++)
	{
		printf("%.3lf%%\n", rate[l]);
	}

	return 0;
}