#include <stdio.h>
int main(){
    double number_f_1;
    double number_f_2;
    double number_f_3;
    double number_f_4;

    scanf("%lf",&number_f_1);
    scanf("%lf",&number_f_2);
    scanf("%lf",&number_f_3);
    scanf("%lf",&number_f_4);

    double sim = number_f_1 + number_f_2 + number_f_3 + number_f_4;
    printf("Summation is %.2lf\n", sim);

    double ave = (sim / 4);
    printf("Average is %.3lf", ave);
    return 0;
}