// 3052
// ������
// C���
// ù° �ٿ�, 42�� �������� ��, ���� �ٸ� �������� �� �� �ִ��� ����Ͻÿ�.

#include <stdio.h>

int main(void)
{
	int num, count = 0, value = 0;
	int remain[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		remain[i] = num % 42;
	}
	for (int j = 0; j < 10; j++)
	{
		for (int k = 0; k < j; k++)
		{
			if (remain[j] == remain[k])
				count++;
		}
		if (count == 0)
			value++;
	}
	printf("%d", value);

	return 0;
}