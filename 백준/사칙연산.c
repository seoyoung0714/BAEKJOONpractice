// 10869
// �� �ڿ��� A�� B�� �־��� ����,
// A+B, A-B, AxB, A/B(��), A%B(������)�� ����ϴ� ���α׷�
#include <stdio.h>

int main()
{
    int A, B;
    printf("�� �ڿ����� �Է��Ͻÿ�: ");
    scanf("%d %d", &A, &B);

    printf("�� �ڿ����� ��: %d\n", A + B);
    printf("�� �ڿ����� ��: %d\n", A - B);
    printf("�� �ڿ����� ��: %d\n", A * B);
    printf("�� �ڿ����� ������ ��: %d\n", A / B);
    printf("�� �ڿ����� ������ ������: %d\n", A % B);

    return 0;
}