// 10926
// 아이디가 주어졌을 때, 놀람을 표현하는 프로그램
// 아이디: 알파벳 소문자, 길이 50자 넘지 않음
#include <stdio.h>

int main()
{
    char ch[50];
    printf("아이디를 입력하시오(알파벳 소문자): ");
    scanf("%s", ch, sizeof(ch));

    printf("%s??!\n", ch);

    return 0;
}
