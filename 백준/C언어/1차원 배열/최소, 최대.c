// 10818
// 최소, 최대
// N개의 정수가 주어졌을 때, 최솟값과 최댓값을 구하는 프로그램
#include <stdio.h>

int main(void)
{
	int N;
	int min, max;
	scanf("%d", &N);
	int arr[N];

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	min = arr[0];
	max = arr[0];
	for (int j = 0; j < N; j++)
	{
		if (arr[j] < min)
			min = arr[j];
		if (arr[j] > max)
			max = arr[j];
	}
	printf("%d %d", min, max);

	return 0;
}
