// 10952
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램
// 몇 번 시행할 지는 정해져 있지 않고 0 0을 입력하면 종료
#include <stdio.h>

int main()
{
    int A, B;
    while (1)
    {
        printf("두 정수를 입력하시오(종료: 0 0): ");
        scanf("%d %d", &A, &B);

        if (A == 0 && B == 0)
            break;
        printf("두 수의 합: %d\n", A + B);
    }

    return 0;
}