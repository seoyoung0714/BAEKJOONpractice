// 10869
// 두 자연수 A와 B가 주어진 다음,
// A+B, A-B, AxB, A/B(몫), A%B(나머지)를 출력하는 프로그램
#include <stdio.h>

int main()
{
    int A, B;
    printf("두 자연수를 입력하시오: ");
    scanf("%d %d", &A, &B);

    printf("두 자연수의 합: %d\n", A + B);
    printf("두 자연수의 차: %d\n", A - B);
    printf("두 자연수의 곲: %d\n", A * B);
    printf("두 자연수의 나누기 몫: %d\n", A / B);
    printf("두 자연수의 나누기 나머지: %d\n", A % B);

    return 0;
}