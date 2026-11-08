#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char *str = (char *) malloc(101 * sizeof(char));
    scanf("%[^\n]", str);

    int lower_count = 0, upper_count = 0, digit_count = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        if (islower(*ptr))
            lower_count++;
        else if (isupper(*ptr))
            upper_count++;
        else if (isdigit(*ptr))
            digit_count++;

        ptr++;
    }

    printf("Lowercase letters: %d\n", lower_count);
    printf("Uppercase letters: %d\n", upper_count);
    printf("Digits: %d\n", digit_count);

    free(str);
    return 0;
}