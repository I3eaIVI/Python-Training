#include <stdio.h>

int main(void) {
    char name[201], surname[201];

    scanf("%200s %200s", name, surname);

    printf("%c.%c.\n", name[0], surname[0]);

    return 0;
}