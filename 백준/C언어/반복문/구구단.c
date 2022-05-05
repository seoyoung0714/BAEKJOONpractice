// 2739
// N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램
#include <stdio.h>

int main()
{
    int N;
    printf("1이상 9이하의 정수를 입력하시오: ");
    scanf("%d", &N);

    for (int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", N, i, N * i);
    }

    return 0;
}
