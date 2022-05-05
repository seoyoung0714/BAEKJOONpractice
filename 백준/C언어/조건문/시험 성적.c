// 9498
// 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램
#include <stdio.h>

int main()
{
    int score;
    printf("시험 점수를 입력하시오: ");
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
