// 1008
// �� ���� A�� B�� �Է¹��� ����, A/B�� ����ϴ� ���α׷�
#include <stdio.h>

int main()
{
    int A, B;
    printf("�� ������ �Է��Ͻÿ�: ");
    scanf("%d %d", &A, &B);

    printf("�� ������ ���� ��: %.9lf\n", (double)A / B);

    return 0;
}