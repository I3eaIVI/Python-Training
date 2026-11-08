#include <stdio.h>
#include <ctype.h>

int main(void) {
    char alpha[26] = {0}, temp_in;
    int num, alpha_count = 0, found = 0, data[26] = {0};

    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf(" %c", &temp_in);
        temp_in = tolower(temp_in);

        found = 0;
        for (int j = 0; j < alpha_count; j++) {
            if (temp_in == alpha[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            alpha[alpha_count++] = temp_in;
        }

        data[temp_in - 97]++;
    }

    for (int i = 0; i < alpha_count; i++) {
        printf("%c: %d\n", alpha[i], data[alpha[i] - 97]);
    }

    return 0;
}