// 18108
// 불기 연도가 주어질 때 이를 서기 연도로 바꿔 주는 프로그램
#include <stdio.h>

int main()
{
    int year;
    printf("불기 연도를 입력하시오: ");
    scanf("%d", &year);

    printf("%d\n", year - 543);

    return 0;
}