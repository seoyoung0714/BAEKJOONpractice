// 2884
// ������ �˶� �ð��� �־����� ��, 45�� �ռ��� �ð����� �ٲٴ� ���α׷�
#include <stdio.h>

int main()
{
    int H, M, totalM;
    printf("������ �˶� �ð��� �Է��Ͻÿ�: ");
    scanf("%d %d", &H, &M);

    totalM = H * 60 + M;
    
    if (totalM >= 45 && totalM < 24 * 60 + 60)
        printf("%d�� %d��", (totalM - 45) / 60, (totalM - 45) % 60);
    else if (totalM < 45)
        printf("23�� %d��", 60 + (totalM - 45));

    return 0;
}
