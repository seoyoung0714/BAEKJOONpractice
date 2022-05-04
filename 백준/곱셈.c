// 2588
// (세 자리 수)x(세 자리 수)를 구하는 프로그램
// 계산할 때 중간 과정의 값도 출력
#include <stdio.h>

int main()
{
    int A1, A2, A3, A4, A5, A6;
    printf("두 개의 세 자리 자연수를 입력하시오: ");
    scanf("%d %d", &A1, &A2);

    A3 = A1 * (A2 % 10);
    A4 = A1 * ((A2 % 100) / 10);
    A5 = A1 * (A2 / 100);
    A6 = A3 + A4 * 10 + A5 * 100;

    printf("첫 번째 결과값: %d\n", A3);
    printf("두 번째 결과값: %d\n", A4);
    printf("세 번째 결과값: %d\n", A5);
    printf("두 개의 세 자리 자연수의 곱: %d\n", A6);

    return 0;
}