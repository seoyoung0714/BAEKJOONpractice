// 2562
// �ִ�
// 9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã�� �� �ִ��� �� ��° �������� ���ϴ� ���α׷�
#include <stdio.h>

int main(void)
{
	int num[9];
	int count;
	int max = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num[i]);
		if (max < num[i])
		{
			max = num[i];
			count = i + 1;
		}
	}
	printf("%d\n%d\n", max, count);

	return 0;
}