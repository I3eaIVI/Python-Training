#include <stdio.h>

int main(){
    double number_f_1;
    double number_f_2;
    double number_f_3;
    double pi = 3.14159265359;
    scanf("%lf\n%lf\n%lf",&number_f_1, &number_f_2, &number_f_3);
    double r = number_f_2 / 2;
    double sum,pa;
    sum = number_f_3 * pi * (r * r);
    pa = number_f_1 / sum;
    printf("Volume : %.2lfml\n", sum);
    printf("Baht/ml : %.4lf", pa);
    return 0;
}
