#include <stdio.h>

int main() {
    int n;
    printf("������Ҫ���ܵ�����������");
    scanf("%d", &n);  // ��ȡҪ���������

    for (int i = 0; i < n; i++) {
        int num, a, b, c, d;
        
        // ����һ����λ����
        printf("������� %d ����λ������", i + 1);
        scanf("%d", &num);

        // ����ÿһλ����
        a = num / 1000;       // ǧλ
        b = (num / 100) % 10; // ��λ
        c = (num / 10) % 10;  // ʮλ
        d = num % 10;         // ��λ

        // ÿλ���ּ���5����10ȡ��
        a = (a + 5) % 10;
        b = (b + 5) % 10;
        c = (c + 5) % 10;
        d = (d + 5) % 10;

        // ֱ�ӵ���λ�ý��������������һλ�͵���λ���ڶ�λ�͵���λ
        int encryptedNum = d * 1000 + c * 100 + b * 10 + a;
        printf("���ܺ������Ϊ��%d\n", encryptedNum);
    }

    return 0;
}
