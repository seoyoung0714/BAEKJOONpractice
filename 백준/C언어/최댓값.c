// 2562
// �ִ�
// C���
// ù° �ٿ� �ִ��� ����ϰ�, ��° �ٿ� �ִ��� �� ��° �������� ����Ͻÿ�.

#include <stdio.h>

int main(void)
{
	int arr[9];
	int max = 0;
	int pos;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < 9; j++)
	{
		if (arr[j] > max)
		{
			max = arr[j];
			pos = j + 1;
		}
	}
	printf("%d\n", max);
	printf("%d\n", pos);

	return 0;
}