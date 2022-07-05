// 2562
// 최댓값
// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램
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