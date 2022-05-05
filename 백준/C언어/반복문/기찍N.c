// 2742
// 자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램
#include <stdio.h>

int main()
{
    int N;
    printf("자연수를 입력하시오: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("%d\n", N + 1 - i);
    }

    return 0;
}
