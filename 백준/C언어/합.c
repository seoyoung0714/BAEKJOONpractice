// 8393
// 합
// C언어
// 1부터 n까지 합을 출력하시오.

#include <stdio.h>

int main(void)
{
	int n;
	int sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		sum += i;
	printf("%d\n", sum);

	return 0;
}