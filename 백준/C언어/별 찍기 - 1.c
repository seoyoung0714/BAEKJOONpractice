// 2438
// �� ��� - 1
// C���
// ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ͻÿ�.

#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}