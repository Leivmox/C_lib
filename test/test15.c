#include<stdio.h>

int main() 
{
    char c;
    int a;

    scanf("%c %d", &c, &a);


 if (c == 'A' || c == 'a') {
        printf("����");
    } else if (c == 'B' || c == 'b') {
        printf("����");
    } else if (c == 'C' || c == 'c') {
        printf("÷��");
    } else if (c == 'D' || c == 'd') {
        printf("����");
    } else {
        return 1;
    }

    if (a >= 2 && a <= 10) {
        printf("%d\n", a);
    } else if (a == 1) {
        printf("A\n");
    } else if (a == 11) {
        printf("J\n");
    } else if (a == 12) {
        printf("Q\n");
    } else if (a == 13) {
        printf("K\n");
    } else {
        printf("\n��Ч�ĵ���");
    }

    return 0;
}
