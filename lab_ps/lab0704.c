#include <stdio.h>
#include <ctype.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main() {
    char a;
    double n;
    double r;

    scanf("%lf %c", &n, &a);
    a = tolower(a);

    if (a == 'c') {
        r = celsiusToFahrenheit(n);
        printFarenheit(r);
    } else if (a == 'f') {
        r = fahrenheitToCelcius(n);
        printCelcius(r);
    }

    return 0;
}

double celsiusToFahrenheit(double celcius) {
    double f;

    f = 32 + (celcius * 1.8);

    return f;
}

double fahrenheitToCelcius(double fahrenheit) {
    double c;

    c = (fahrenheit - 32) * 5.0 / 9.0;

    return c;
}

void printFarenheit(double fahrenheit) {
    printf("%.2f f", fahrenheit);
}

void printCelcius(double celcius) {
    printf("%.2f c", celcius);
}