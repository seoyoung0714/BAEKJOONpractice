// 10871
// X���� ���� ��
// C���
// X���� ���� ���� �Է¹��� ������� �������� ������ ����Ͻÿ�.

#include <stdio.h>

int main(void)
{
	int N, X, A;
	scanf("%d %d", &N, &X);

	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &A);

		if (A < X)
			printf("%d ", A);
	}

	return 0;
}