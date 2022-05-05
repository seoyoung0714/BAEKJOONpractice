// 2525
// 오븐을 시작하는 시각과 오븐을 이용하는데 필요한 시간이 분단위로 주어졌을 때, 오븐이 끝나는 시각을 계산하는 프로그램
#include <stdio.h>

int main()
{
    int H, M, inputM, totalM;
    printf("오븐을 시작하는 시각을 입력하시오: ");
    scanf("%d %d", &H, &M);
    printf("오븐을 이용하는데 필요한 시간(분)을 입력하시오: ");
    scanf("%d", &inputM);
    totalM = H * 60 + M + inputM;
    if (totalM >= 24 * 60)
    {
        totalM = totalM - 24 * 60;
        printf("%d시 %d분", totalM / 60, totalM % 60);
    }
    else if (totalM < 24 * 60)
    {
        printf("%d시 %d분", totalM / 60, totalM % 60);
    }

    return 0;
}