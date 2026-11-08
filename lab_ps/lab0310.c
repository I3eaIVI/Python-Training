#include <stdio.h>

int main(){
    float number_f_1;
    float number_f_2;

    scanf("%f\n%f",&number_f_1, &number_f_2);
    
    float sum,cen;
    cen = number_f_1 / 100;
    sum = number_f_2 / (cen * cen);
    printf("%f\n", sum);
    return 0;
}
