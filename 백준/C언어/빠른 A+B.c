// 15552
// ���� A+B
// C���
// �� �׽�Ʈ ���̽����� A+B�� �� �ٿ� �ϳ��� ������� ����Ͻÿ�.

#include <stdio.h>

int main(void)
{
	int T, A, B;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}