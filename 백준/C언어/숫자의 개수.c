// 2577
// ������ ����
// C���
// ù° �ٿ��� AxBxC�� ����� 0�� �� �� �������� ����Ͻÿ�. ���������� ��° �ٺ��� �� ��° �ٱ��� AxBxC�� ����� 1���� 9������ ���ڰ� ���� �� �� �������� ���ʷ� �� �ٿ� �ϳ��� ����Ͻÿ�.

#include <stdio.h>

int main(void)
{
	int A, B, C;
	int value, count;
	int num[10] = { 0, };

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	value = A * B * C;

	while (value > 0)
	{
		count = value % 10;
		num[count] += 1;
		value = value / 10;
	}

	for (int j = 0; j < 10; j++)
	{
		printf("%d\n", num[j]);
	}

	return 0;
}