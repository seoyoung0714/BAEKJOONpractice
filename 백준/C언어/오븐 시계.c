// 2525
// ������ �����ϴ� �ð��� ������ �̿��ϴµ� �ʿ��� �ð��� �д����� �־����� ��, ������ ������ �ð��� ����ϴ� ���α׷�
#include <stdio.h>

int main()
{
    int H, M, inputM, totalM;
    printf("������ �����ϴ� �ð��� �Է��Ͻÿ�: ");
    scanf("%d %d", &H, &M);
    printf("������ �̿��ϴµ� �ʿ��� �ð�(��)�� �Է��Ͻÿ�: ");
    scanf("%d", &inputM);
    totalM = H * 60 + M + inputM;
    if (totalM >= 24 * 60)
    {
        totalM = totalM - 24 * 60;
        printf("%d�� %d��", totalM / 60, totalM % 60);
    }
    else if (totalM < 24 * 60)
    {
        printf("%d�� %d��", totalM / 60, totalM % 60);
    }

    return 0;
}