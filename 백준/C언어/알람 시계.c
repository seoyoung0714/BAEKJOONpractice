// 2884
// 설정한 알람 시각이 주어졌을 때, 45분 앞서는 시간으로 바꾸는 프로그램
#include <stdio.h>

int main()
{
    int H, M, totalM;
    printf("설정한 알람 시각을 입력하시오: ");
    scanf("%d %d", &H, &M);

    totalM = H * 60 + M;
    
    if (totalM >= 45 && totalM < 24 * 60 + 60)
        printf("%d시 %d분", (totalM - 45) / 60, (totalM - 45) % 60);
    else if (totalM < 45)
        printf("23시 %d분", 60 + (totalM - 45));

    return 0;
}
