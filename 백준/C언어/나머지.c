// 10430
// ������
// C���
// ù° �ٿ� (A+B)%C, ��° �ٿ� ((A%C)+(B%C))%C, ��° �ٿ� (AxB)%C, ��° �ٿ� ((A%C)x(B%C))%C�� ����Ͻÿ�.

#include <stdio.h>

int main(void)
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    printf("%d\n", (A + B) % C);
    printf("%d\n", ((A % C) + (B % C)) % C);
    printf("%d\n", (A * B) % C);
    printf("%d\n", ((A % C) * (B % C)) % C);

    return 0;
}