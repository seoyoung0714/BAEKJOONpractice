// 1110
// N이 주어졌을 때, N의 사이클의 길이를 구하는 프로그램
// 예) 26 입력. 2+6=8 -> 68, 6+8=14 -> 84, 8+4=12 -> 42, 4+2=6 -> 26
//     4번만에 원래 수로 돌아왔으므로 26의 사이클의 길이는 4
#include <stdio.h>

int main()
{
	int startN, N, sum, newN = -1, count = 0;
	printf("100 미만인 자연수를 입력하시오: ");
	scanf("%d", &startN);

	N = startN;
	while (startN != newN)
	{
		sum = N / 10 + N % 10;
		newN = (N % 10) * 10 + sum % 10;
		N = newN;
		count++;
	}
	printf("%d의 사이클의 길이: %d", startN, count);

	return 0;
}
