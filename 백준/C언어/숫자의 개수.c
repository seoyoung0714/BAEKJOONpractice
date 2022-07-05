// 2577
// 숫자의 개수
// 세 개의 자연수 A, B, C가 주어질 때, A x B x C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램
#include <stdio.h>

int main(void)
{
	int A, B, C;
	int product, nums;
	int num[10] = { 0, };

	scanf("%d %d %d", &A, &B, &C);

	product = A * B * C;

	while (1)
	{
		nums = product % 10;
		num[nums] = num[nums] + 1;
		product = product / 10;
		if (product <= 0)
			break;
	}
	for (int j = 0; j < 10; j++)
		printf("%d\n", num[j]);

	return 0;
}