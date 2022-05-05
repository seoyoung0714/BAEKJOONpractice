// 2439
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
// 오른쪽을 기준으로 정렬한 별
#include <stdio.h>

int main()
{
    int N;
    printf("자연수를 입력하시오: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
