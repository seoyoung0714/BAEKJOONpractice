// 2739
// N�� �Է¹��� ��, ������ N���� ����ϴ� ���α׷�
#include <stdio.h>

int main()
{
    int N;
    printf("1�̻� 9������ ������ �Է��Ͻÿ�: ");
    scanf("%d", &N);

    for (int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", N, i, N * i);
    }

    return 0;
}