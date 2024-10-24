#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;  
    float d, x1, x2;  

    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 1e-6) {
        // delta > 0������������ȵ�ʵ��
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1=%.3f x2=%.3f\n", x1, x2);
    } else if (fabs(d) < 1e-6) {
        // delta �ӽ�0����������ȵ�ʵ��
        x1 = x2 = -b / (2 * a);
        printf("x1=x2=%.3f\n", x1);
    } else {
        // delta < 0���������������
        float p = -b / (2 * a);  // ʵ��
        float q = sqrt(-d) / (2 * a);  // �鲿
        printf("x1=%.3f+%.3fi x2=%.3f-%.3fi\n", p, q, p, q);
    }    return 0;
}
