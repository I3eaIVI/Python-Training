#include <stdio.h>

int main(void) {
    char num[6];

    scanf("%s", num);

    printf("%.*s%*s", 1, num, 79, "");
    printf("%*s%.*s%*s", 1, "", 2, num,  77, "");
    printf("%*s%.*s%*s", 2, "", 3, num,  75, "");
    printf("%*s%.*s%*s", 3, "", 4, num,  73, "");
    printf("%*s%.*s%*s", 4, "", 5, num,  71, "");

    return 0;
}