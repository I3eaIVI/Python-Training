#include <stdio.h>

int main(void) {
    int count[256] = {0};
    int c;

    while ((c = getchar()) != EOF && c != '\n') {
        if (c != ' ' && c != '\r') count[c & 255]++;
    }

    for (int ch = 0; ch < 256; ch++) {
        for (int k = 0; k < count[ch]; k++) {
            putchar(ch);
        }
    }
    putchar('\n');

    return 0;
}