// 2753
// 연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램
// 윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때
#include <stdio.h>

int main()
{
    int year;
    printf("연도를 입력하시오: ");
    scanf("%d", &year);
    if ((year % 4 == 0) && (((year % 100) != 0) || (year % 400 == 0)))
        printf("1");
    else
        printf("0");

    return 0;
}