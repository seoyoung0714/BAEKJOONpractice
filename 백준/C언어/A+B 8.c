// 11022
// �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷�
// ù �Է°�: �׽�Ʈ�� ����
// ������ �Է°�: �׽�Ʈ ������ŭ�� ���� ��
#include <stdio.h>

int main()
{
    int T, A, B;
    printf("�׽�Ʈ�� ������ �Է��Ͻÿ�: ");
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        printf("�� ������ �Է��Ͻÿ�: ");
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
    }

    return 0;
}