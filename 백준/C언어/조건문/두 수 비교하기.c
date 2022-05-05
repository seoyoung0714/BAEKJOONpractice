// 1330
// 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램
#include <stdio.h>

int main()
{
    int A, B;
    printf("두 정수를 입력하시오: ");
    scanf("%d %d", &A, &B);

    if (A > B)
        printf("A > B");
    else if (A < B)
        printf("A < B");
    else
        printf("A == B");

    return 0;
}
