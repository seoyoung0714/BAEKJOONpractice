// 10430
// (A+B)%C�� ((A%C)+(B%C))%C �� ������?
// (AxB)%C�� ((A%C)x(B%C))%C �� ������?
// �� �� A, B, C�� �־����� ��, ���� �� ���� ���� ���ϴ� ���α׷�
#include <stdio.h>

int main()
{
    int A, B, C;
    printf("�� �� A, B, C�� �Է��Ͻÿ�: ");
    scanf("%d %d %d", &A, &B, &C);

    printf("(A+B) ������ C: %23d\n", (A + B) % C);
    printf("((A ������ C)+(B ������ C)) ������ C: %d\n", ((A % B) + (B % C)) % C);
    printf("(AxB) ������ C: %23d\n", (A * B) % C);
    printf("((A ������ C)x(B ������ C)) ������ C: %d\n", ((A % C) * (B % C)) % C);

    return 0;
}