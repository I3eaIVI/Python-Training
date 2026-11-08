#include <stdio.h>
#include <stdlib.h>

int main() {
    long n, m;
    scanf("%ld %ld", &n, &m);
    char *str = (char *) malloc((n + 2) * sizeof(char));
    scanf(" %[^\n]", str);

    char *ptr = str;
    long count = 0;
    while (*ptr != '\0') {
        count++;
        if ((count - 1) % m == 0)
            putchar(*ptr);
        ptr++;
    }
    printf("\n");

    free(str);
    return 0;
}