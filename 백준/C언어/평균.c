// 1546
// ���
// C���
// ù° �ٿ� ���ο� ����� ����Ͻÿ�.

#include <stdio.h>

int main(void)
{
	int N;
	int M = 0;
	double sum = 0;
	int score[1000];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &score[i]);
		if (score[i] > M)
			M = score[i];
	}
	for (int j = 0; j < N; j++)
	{
		sum = sum + ((double)score[j] / M) * 100;
	}
	printf("%lf\n", (double)sum / N);

	return 0;
}