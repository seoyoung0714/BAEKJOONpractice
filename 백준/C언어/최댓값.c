// 2562
// 최댓값
// C언어
// 첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓갓이 몇 번째 수인지를 출력하시오.

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