// 1110
// ���ϱ� ����Ŭ
// C���
// ù° �ٿ� N�� ����Ŭ ���̸� ����Ͻÿ�.

#include <stdio.h>

int main(void)
{
	int startN, N, sum, newN = -1, count = 0;
	scanf("%d", &startN);

	N = startN;

	while (startN != newN)
	{
		sum = N / 10 + N % 10;
		newN = (N % 10) * 10 + sum % 10;
		N = newN;
		count++;
	}
	printf("%d", count);

	return 0;
}