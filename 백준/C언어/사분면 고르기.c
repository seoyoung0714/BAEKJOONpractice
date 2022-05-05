// 14681
// 점의 좌표를 입력받아 그 점이 어느 사분면에 속하는지 알아내는 프로그램
// 단, x좌표와 y좌표는 모두 양수나 음수라고 가정
#include <stdio.h>

int main()
{
    int x, y;
    printf("점의 좌표를 입력하시오: ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
        printf("1사분면");
    else if (x < 0 && y > 0)
        printf("2사분면");
    else if (x < 0 && y < 0)
        printf("3사분면");
    else if (x > 0 && y < 0)
        printf("4사분면");

    return 0;
}