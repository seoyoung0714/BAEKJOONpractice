// 10951
// �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷�

#include <stdio.h>

int main()
{
    int A, B;
    printf("�� ������ �Է��Ͻÿ�(����: q): ");

    while (scanf("%d %d", &A, &B) == 2)
    {
        printf("�� ���� ��: %d\n", A + B);
        printf("�� ������ �Է��Ͻÿ�(����: q): ");
    }

    return 0;
}