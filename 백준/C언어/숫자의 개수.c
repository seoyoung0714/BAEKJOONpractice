// 2577
// ������ ����
// �� ���� �ڿ��� A, B, C�� �־��� ��, A x B x C�� ����� ����� 0���� 9���� ������ ���ڰ� �� ���� ���������� ���ϴ� ���α׷�
#include <stdio.h>

int main(void)
{
	int A, B, C;
	int product, nums;
	int num[10] = { 0, };

	scanf("%d %d %d", &A, &B, &C);

	product = A * B * C;

	while (1)
	{
		nums = product % 10;
		num[nums] = num[nums] + 1;
		product = product / 10;
		if (product <= 0)
			break;
	}
	for (int j = 0; j < 10; j++)
		printf("%d\n", num[j]);

	return 0;
}