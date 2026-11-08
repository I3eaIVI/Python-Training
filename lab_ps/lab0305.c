#include <stdio.h>

int main(){
    double number_f_1;
    double number_f_2;

    scanf("%lf\n%lf",&number_f_1, &number_f_2);

    double sum;
    sum = (number_f_1 *2) + (number_f_2 * 2);
    printf("Perimeter of rectangle = %.4lf units\n", sum);
    return 0;
}
