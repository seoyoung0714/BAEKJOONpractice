// 11022
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램
// 첫 입력값: 테스트의 개수
// 나머지 입력값: 테스트 개수만큼의 정수 값
#include <stdio.h>

int main()
{
    int T, A, B;
    printf("테스트의 개수를 입력하시오: ");
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        printf("두 정수를 입력하시오: ");
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
    }

    return 0;
}