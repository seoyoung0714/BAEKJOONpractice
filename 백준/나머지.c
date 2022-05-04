// 10430
// (A+B)%C는 ((A%C)+(B%C))%C 와 같을까?
// (AxB)%C는 ((A%C)x(B%C))%C 와 같을까?
// 세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램
#include <stdio.h>

int main()
{
    int A, B, C;
    printf("세 수 A, B, C를 입력하시오: ");
    scanf("%d %d %d", &A, &B, &C);

    printf("(A+B) 나머지 C: %23d\n", (A + B) % C);
    printf("((A 나머지 C)+(B 나머지 C)) 나머지 C: %d\n", ((A % B) + (B % C)) % C);
    printf("(AxB) 나머지 C: %23d\n", (A * B) % C);
    printf("((A 나머지 C)x(B 나머지 C)) 나머지 C: %d\n", ((A % C) * (B % C)) % C);

    return 0;
}