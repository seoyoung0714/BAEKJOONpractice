// 2588
// ����
// C���
// ù° �ٺ��� ��° �ٱ��� ���ʴ�� (3),(4),(5),(6)�� �� ���� ����Ͻÿ�.

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6;
    scanf("%d %d", &n1, &n2);

    n3 = n1 * (n2 % 10);
    n4 = n1 * ((n2 % 100) / 10);
    n5 = n1 * (n2 / 100);

    n6 = n3 + (n4 * 10) + (n5 * 100);

    printf("%d\n", n3);
    printf("%d\n", n4);
    printf("%d\n", n5);
    printf("%d\n", n6);

    return 0;
}