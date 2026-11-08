#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if (num1 == num2) {
        printf("0.00\n");
        return 0;
    }

    int lo, hi;
    if (num1 < num2) { lo = num1; hi = num2; } else { lo = num2; hi = num1; }
    int num3 = hi - lo;

    double dis;
    if (lo == 1) dis = 6 + 4 * (num3 - 1);
    else dis = 4 * num3;

    double v = 1.5, a = 0.5;
    double saccel = (v * v) / (2 * a);
    double taccel = v / a;
    double scruise = dis - (2 * saccel);
    double tcruise = scruise / v;
    double total = 2 * taccel + tcruise;

    printf("%.2f\n", total);
    return 0;
}