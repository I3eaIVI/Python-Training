#include <stdio.h>

int main(){
    double number_f_1;
    double number_f_2;

    scanf("%lf,%lf",&number_f_1, &number_f_2);

    double sum,dif,pro,quo;
    sum = number_f_1 + number_f_2;
    dif = number_f_1 - number_f_2;
    pro = number_f_1 * number_f_2;
    quo = number_f_1 / number_f_2;
    printf("The sum of the given numbers : %lf\n", sum);
    printf("The difference of the given numbers : %lf\n", dif);
    printf("The product of the given numbers : %lf\n", pro);
    printf("The quotient of the given numbers : %lf", quo);
    return 0;
}
