// 8393
// ��
// n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷�
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("1���� %d������ ��: %d", n, sum);

    return 0;
}