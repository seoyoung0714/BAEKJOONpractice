// 2742
// �ڿ��� N�� �־����� ��, N���� 1���� �� �ٿ� �ϳ��� ����ϴ� ���α׷�
#include <stdio.h>

int main()
{
    int N;
    printf("�ڿ����� �Է��Ͻÿ�: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("%d\n", N + 1 - i);
    }

    return 0;
}