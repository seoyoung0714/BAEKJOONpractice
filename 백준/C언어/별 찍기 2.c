// 2439
// ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
// �������� �������� ������ ��
#include <stdio.h>

int main()
{
    int N;
    printf("�ڿ����� �Է��Ͻÿ�: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}