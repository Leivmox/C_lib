#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d;
    scanf("%f %f %f", &a, &b, &c); //�ȸ�ֵ������
    d = b * b - 4 * a * c;
    if (fabs(d) > 1e-6)
    {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1=%.3f x2=%.3f\n", x1, x2);
    }
    // else if (fabs(d) < 1e-6)
    // {
    //     x1 = x2 = -b / (2 * a);
    //     printf("x1=x2=%.3f\n", x1);
    // }
    // else
    // {
    //     float p = -b / (2 * a);
    //     float q = sqrt(-d) / (2 * a);
    //     printf("x1=%.3f+%.3fi x2=%.3f-%.3fi\n", p, q, p, q);
    // }
    return 0;
}