// 10951
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램

#include <stdio.h>

int main()
{
    int A, B;
    printf("두 정수를 입력하시오(종료: q): ");

    while (scanf("%d %d", &A, &B) == 2)
    {
        printf("두 수의 합: %d\n", A + B);
        printf("두 정수를 입력하시오(종료: q): ");
    }

    return 0;
}