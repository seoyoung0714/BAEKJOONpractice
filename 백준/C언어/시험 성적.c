// 9498
// ���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷�
#include <stdio.h>

int main()
{
    int score;
    printf("���� ������ �Է��Ͻÿ�: ");
    scanf("%d", &score);
    score = score / 10;
    switch (score)
    {
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
            break;
    }

    return 0;
}