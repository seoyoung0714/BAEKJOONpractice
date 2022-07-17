// 10869
// 사칙연산
// C언어
// 첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력하시오.

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
