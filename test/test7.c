// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float R;
//     int n;
//     scanf("%f %d",&R,&n);
//     printf("Area=%.2f",n*R*R*sin(2*3.1415926/n)/2);
//     return 0;
// }
#include<stdio.h>
#include<math.h>

#define PI 3.1415926  // �����Ϊ3.1415926

int main() {
    float R;
    int n;
    
    // ����Բ�뾶����n���εı���
    // scanf("%f %d", &R, &n);
scanf("%f,%d", &R, &n);

    // ���㲢���Բ�ڽ���n���ε����
    printf("Area=%.2f", n * R * R * sin(2 * PI / n) / 2);

    return 0;
}
