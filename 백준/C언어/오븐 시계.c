// 2525
// ���� �ð�
// C���
// ù° �ٿ� ����Ǵ� �ð��� �ÿ� ���� ������ ���̿� �ΰ� ����Ͻÿ�.

#include <stdio.h>

int main(void)
{
	int A, B, C, totalM;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	totalM = A * 60 + B + C;

	if (totalM >= 24 * 60)
	{
		totalM = totalM - 24 * 60;
		printf("%d %d", totalM / 60, totalM % 60);
	}
	else
		printf("%d %d", totalM / 60, totalM % 60);

	return 0;
}