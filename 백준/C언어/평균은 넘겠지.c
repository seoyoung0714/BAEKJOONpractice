// 4344
// ����� �Ѱ���
// C���
// �� ���̽����� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ����Ͻÿ�.

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