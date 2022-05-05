// 2480
// 3개 주사위의 나온 눈이 주어질 때, 상금을 계산하는 프로그램
// 같은 눈이 3개가 나오면 10,000원+(같은 눈)x1,000원의 상금
// 같은 눈이 2개만 나오면 1,000원+(같은 눈)x100원의 상금
// 모두 다른 눈이 나오면 (그 중 가장 큰 눈)x100원의 상금
#include <stdio.h>

int main()
{
    int x1, x2, x3;
    printf("3개 주사위의 나온 눈을 입력하시오: ");
    scanf("%d %d %d", &x1, &x2, &x3);
    if (x1 == x2 && x2 == x3)
        printf("상금: %d원", 10000 + x1 * 1000);
    else if (x1 == x2 && x1 != x3)
        printf("상금: %d원", 1000 + x1 * 100);
    else if (x1 == x3 && x1 != x2)
        printf("상금: %d원", 1000 + x1 * 100);
    else if (x2 == x3 && x2 != x1)
        printf("상금: %d원", 1000 + x2 * 100);
    else
    {
        if (x1 > x2 && x1 > x3)
            printf("상금: %d원", x1 * 100);
        else if (x2 > x1 && x2 > x3)
            printf("상금: %d원", x2 * 100);
        else if (x3 > x1 && x3 > x2)
            printf("상금: %d원", x3 * 100);
    }

    return 0;
}
