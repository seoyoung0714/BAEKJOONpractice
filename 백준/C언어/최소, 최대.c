// 10818
// �ּ�, �ִ�
// C���
// ù° �ٿ� �־��� ���� N���� �ּڰ��� �ִ��� �������� ������ ����Ͻÿ�.

#include <stdio.h>

int main(void)
{
	int N, num;
	int max = -1000001, min = 1000001;

	scanf("%d", &N);
	
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &num);

		if (num > max)
			max = num;
		if (num < min)
			min = num;
	}
	printf("%d %d", min, max);

	return 0;
}