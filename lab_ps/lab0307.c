#include <stdio.h>

int main(){
    double number_f_1;
    double number_f_2;
    double number_f_3;

    scanf("%lf\n%lf\n%lf",&number_f_1, &number_f_2, &number_f_3);

    double sum;
    sum = ((number_f_1 - (number_f_1 * number_f_2 / 100)) * number_f_3);
    printf("%.2lf\n", sum);
    return 0;
}
