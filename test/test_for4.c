#include <stdio.h>

int main() {
    int n;
    printf("������Ҫ�жϵ�������");
    scanf("%d", &n);

    char results[n][4];  // ���ڴ洢ÿ������"YES" �� "NO"

    for (int i = 0; i < n; i++) {
        int a1, a2, a3, b1, b2, b3;

        // ����� i ����������ӳߴ�
        printf("������� %d ������A�ĳߴ磺", i + 1);
        scanf("%d %d %d", &a1, &a2, &a3);

        printf("������� %d ������B�ĳߴ磺", i + 1);
        scanf("%d %d %d", &b1, &b2, &b3);

        // ������A�ĳߴ���м���������
        if (a1 > a2) { int temp = a1; a1 = a2; a2 = temp; }
        if (a1 > a3) { int temp = a1; a1 = a3; a3 = temp; }
        if (a2 > a3) { int temp = a2; a2 = a3; a3 = temp; }

        // ������B�ĳߴ���м���������
        if (b1 > b2) { int temp = b1; b1 = b2; b2 = temp; }
        if (b1 > b3) { int temp = b1; b1 = b3; b3 = temp; }
        if (b2 > b3) { int temp = b2; b2 = b3; b3 = temp; }

        // �Ƚ�ÿһά���Ƿ�����Ƕ������
        if (a1 <= b1 && a2 <= b2 && a3 <= b3) {
            // ���A��ÿһά�ȶ�С�ڵ���B�������Ƕ��
            sprintf(results[i], "YES");
        } else {
            // ������Ƕ��
            sprintf(results[i], "NO");
        }
    }

    // ������н��
    printf("�����\n");
    for (int i = 0; i < n; i++) {
        printf("�� %d �飺%s\n", i + 1, results[i]);
    }

    return 0;
}
