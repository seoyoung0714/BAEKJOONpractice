// 10871
// 정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램
#include <stdio.h>

int main()
{
    int N, X, x;
    printf("입력할 수의 개수와 비교할 수를 입력하시오: ");
    scanf("%d %d", &N, &X);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &x);
        if (x < X)
            printf("%d ", x);
    }

    return 0;
}
