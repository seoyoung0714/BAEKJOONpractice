// 10430
// 나머지
// C언어
// 첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C)+(B%C))%C, 셋째 줄에 (AxB)%C, 넷째 줄에 ((A%C)x(B%C))%C를 출력하시오.

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