#include <stdio.h>
#include <math.h>

double x, y;

double perimeter(void);
double area(void);

int main() {
    double per, ar;

    per = perimeter();
    ar = area();

    printf("Perimeter: %.2lf\n", per);
    printf("Area: %.2lf", ar);

    return 0;
}

double perimeter(void) {
    double c, n;

    scanf("%lf", &x);
    scanf("%lf", &y);

    c = sqrt(x * x + y * y);
    n = x + y + c;

    return n;
}

double area(void) {
    double are;

    are = 0.5 * (x * y);

    return are;
}