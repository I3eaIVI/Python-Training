#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char *s = (char *)malloc(2105);
    int n = 0, c;

    while ((c = getchar()) != EOF && c != '\n') {
        if (c != '\r' && n < 2100) s[n++] = (char)tolower(c);
    }
    s[n] = '\0';

    char *p = strstr(s, "cat");
    int first = 1;

    while (p != NULL) {
        if (!first) printf(", ");
        printf("%d", (int)(p - s));
        first = 0;
        p = strstr(p + 1, "cat");
    }
    printf("\n");

    return 0;
}