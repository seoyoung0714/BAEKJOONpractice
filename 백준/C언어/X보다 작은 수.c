// 10871
// ���� N���� �̷���� ���� A�� ���� X�� �־�����. �̶�, A���� X���� ���� ���� ��� ����ϴ� ���α׷�
#include <stdio.h>

int main()
{
    int N, X, x;
    printf("�Է��� ���� ������ ���� ���� �Է��Ͻÿ�: ");
    scanf("%d %d", &N, &X);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &x);
        if (x < X)
            printf("%d ", x);
    }

    return 0;
}