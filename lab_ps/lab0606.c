#include <stdio.h>
#include <ctype.h>

int main() {
    char names[20][61];

    for (int i = 0; i < 20; i++) {
        scanf(" %60[^\n]", names[i]);

        for (int k = 0; names[i][k] != '\0'; k++) {
            if (k == 0 || names[i][k - 1] == ' ')
                names[i][k] = toupper(names[i][k]);
            else
                names[i][k] = tolower(names[i][k]);
        }
    }

    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19 - i; j++) {

            int cmp = 0, k = 0;
            while (names[j][k] != '\0' && names[j + 1][k] != '\0') {
                if (names[j][k] != names[j + 1][k]) { cmp = names[j][k] - names[j + 1][k]; break; }
                k++;
            }
            if (cmp == 0) cmp = names[j][k] - names[j + 1][k];

            if (cmp > 0) {
                char temp[61];
                int t = 0;
                while (names[j][t] != '\0') { temp[t] = names[j][t]; t++; }
                temp[t] = '\0';

                t = 0;
                while (names[j + 1][t] != '\0') { names[j][t] = names[j + 1][t]; t++; }
                names[j][t] = '\0';

                t = 0;
                while (temp[t] != '\0') { names[j + 1][t] = temp[t]; t++; }
                names[j + 1][t] = '\0';
            }
        }
    }

    for (int i = 0; i < 20; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}