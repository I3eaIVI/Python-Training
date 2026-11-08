#include <stdio.h>
#include <math.h>

int main() {
    int theta, u;
    double rad, h;
    double pi = 3.141592653589793;
    double g = 9.81;

    scanf("%d", &theta);
    scanf("%d", &u);

    rad = (theta * pi) / 180.0;
    h = pow(u * sin(rad), 2) / (2 * g);

    printf("theta (degree) : %d\n", theta);
    printf("u (m/s) : %d\n", u);
    printf("h (m) : %.4f", h);

    return 0;
}