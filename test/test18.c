#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    // ���������ߵĳ���
    printf("�����������ߵĳ��ȣ��Կո�ָ���");
    scanf("%f %f %f", &a, &b, &c);

    // �ж��Ƿ�Ϊ������
    if (a + b > c && a + c > b && b + c > a) {
        // �ж��Ƿ�Ϊ�ȱ�������
        if (fabs(a - b) < 0.001 && fabs(b - c) < 0.001) {
            printf("�ȱ�������\n");
        }
        // �ж��Ƿ�Ϊ����������
        else if (fabs(a - b) < 0.001 || fabs(a - c) < 0.001 || fabs(b - c) < 0.001) {
            // �ж��Ƿ�Ϊ����ֱ��������
            if (fabs(a * a + b * b - c * c) < 0.001 || 
                fabs(a * a + c * c - b * b) < 0.001 || 
                fabs(b * b + c * c - a * a) < 0.001) {
                printf("����ֱ��������\n");
            } else {
                printf("����������\n");
            }
        }
        // �ж��Ƿ�Ϊֱ��������
        else if (fabs(a * a + b * b - c * c) < 0.001 || 
                 fabs(a * a + c * c - b * b) < 0.001 || 
                 fabs(b * b + c * c - a * a) < 0.001) {
            printf("ֱ��������\n");
        }
        // ��ͨ������
        else {
            printf("��ͨ������\n");
        }
    }
    // ����������
    else {
        printf("��������\n");
    }

    return 0;
}
