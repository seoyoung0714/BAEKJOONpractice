// 10869
// ��Ģ����
// C���
// ù° �ٿ� A+B, ��° �ٿ� A-B, ��° �ٿ� A*B, ��° �ٿ� A/B, �ټ�° �ٿ� A%B�� ����Ͻÿ�.

#include <stdio.h>

int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);

    printf("%d\n", A + B);
    printf("%d\n", A - B);
    printf("%d\n", A * B);
    printf("%d\n", A / B);
    printf("%d\n", A % B);

    return 0;
}