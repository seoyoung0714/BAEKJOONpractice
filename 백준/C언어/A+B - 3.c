// 10950
// A+B - 3
// C���
// �� �׽�Ʈ ���̽����� A+B�� ����Ͻÿ�.

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