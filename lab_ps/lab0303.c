#include <stdio.h>
#include <math.h>
int main(){
    double number_f_1, sam;
    double number_f_2;

    scanf("%lf",&number_f_1);
    scanf("%lf",&number_f_2);

    double sim = (number_f_1 * number_f_1) + (number_f_2 * number_f_2);
    sam = sqrt(sim);
    printf("%.2lf", sam);
    return 0;
}
