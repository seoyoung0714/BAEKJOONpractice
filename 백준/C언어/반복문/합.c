// 8393
// 합
// n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("1부터 %d까지의 합: %d", n, sum);

    return 0;
}
