// 1330
// �� ���� A�� B�� �־����� ��, A�� B�� ���ϴ� ���α׷�
#include <stdio.h>

int main()
{
    int A, B;
    printf("�� ������ �Է��Ͻÿ�: ");
    scanf("%d %d", &A, &B);

    if (A > B)
        printf("A > B");
    else if (A < B)
        printf("A < B");
    else
        printf("A == B");

    return 0;
}