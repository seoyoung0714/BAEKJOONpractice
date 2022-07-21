// 10818
// 최소, 최대
// C언어
// 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력하시오.

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