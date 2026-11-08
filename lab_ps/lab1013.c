#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF && c != '\n') {
        if (c != ' ' && c != '\r') putchar(c);
    }
    putchar('\n');

    return 0;
}