// 10952
// A+B - 5
// C���
// �� �׽�Ʈ ���̽����� A+B�� ����Ͻÿ�.

#include <stdio.h>

int main(void)
{
	int A, B;

	while (1)
	{
		scanf("%d %d", &A, &B);

		if (A == 0 && B == 0)
			break;
		else
			printf("%d\n", A + B);
	}

	return 0;
}