#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    scanf("%f\n%f\n%f", &a, &b, &c);
printf("%f",a * a + b * b - c * c);
    if (a + b > c && a + c > b && b + c > a)
    {
        if (fabs(a - b) < 0.001 || fabs(a - c) < 0.001 || fabs(b - c) < 0.001)
        {
            printf("����������");
        }
        else if (fabs(a - b) < 0.001 && fabs(b - c) < 0.001)
        {
            printf("�ȱ�������");
        }
        else if (fabs(a - b) < 0.001 && a * a + b * b - c * c)
        {
            printf("����ֱ��������");
        }
        else
        {
            printf("��ͨ������");
        }
    }
    else
    {
        printf("��������");
    }
    return 0;
}
