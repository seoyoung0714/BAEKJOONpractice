// 14681
// ���� ��ǥ�� �Է¹޾� �� ���� ��� ��и鿡 ���ϴ��� �˾Ƴ��� ���α׷�
// ��, x��ǥ�� y��ǥ�� ��� ����� ������� ����
#include <stdio.h>

int main()
{
    int x, y;
    printf("���� ��ǥ�� �Է��Ͻÿ�: ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
        printf("1��и�");
    else if (x < 0 && y > 0)
        printf("2��и�");
    else if (x < 0 && y < 0)
        printf("3��и�");
    else if (x > 0 && y < 0)
        printf("4��и�");

    return 0;
}