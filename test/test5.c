#include <stdio.h>

int main()
 {
    char upper;
    printf("������һ����д��ĸ��");
    scanf("%c", &upper);
    char lower = upper + 32;
    printf("��Ӧ��Сд��ĸ�ǣ�%c\n", lower);
    return 0;
}