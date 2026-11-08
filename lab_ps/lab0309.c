#include <stdio.h>
int main(){
    double number_f_1;

    scanf("%lf",&number_f_1);

    double sim = number_f_1 * 1.60934;
    printf("%.2lf", sim);
    return 0;
}
