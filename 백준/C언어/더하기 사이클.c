// 1110
// N�� �־����� ��, N�� ����Ŭ�� ���̸� ���ϴ� ���α׷�
// ��) 26 �Է�. 2+6=8 -> 68, 6+8=14 -> 84, 8+4=12 -> 42, 4+2=6 -> 26
//     4������ ���� ���� ���ƿ����Ƿ� 26�� ����Ŭ�� ���̴� 4
#include <stdio.h>

int main()
{
	int startN, N, sum, newN = -1, count = 0;
	printf("100 �̸��� �ڿ����� �Է��Ͻÿ�: ");
	scanf("%d", &startN);

	N = startN;
	while (startN != newN)
	{
		sum = N / 10 + N % 10;
		newN = (N % 10) * 10 + sum % 10;
		N = newN;
		count++;
	}
	printf("%d�� ����Ŭ�� ����: %d", startN, count);

	return 0;
}