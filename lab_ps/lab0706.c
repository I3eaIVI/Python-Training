#include <stdio.h>
#include <math.h>

int  main() {
	double x, y, r;
	scanf("%lf %lf", &x, &y);
	printf("sqrt(%.lf^2+%.lf^2)=%.2lf", x, y, sqrt(x*x + y*y));
	return 0;
}