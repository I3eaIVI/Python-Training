#include <stdio.h>
#include <ctype.h>

void change(char s[]);
int compare(char a[], char b[]);

int main() {
    char a[102];
    char b[102];

    scanf("%[^\n]", a);
    scanf(" %[^\n]", b);

    change(a);
    change(b);

    printf("*** Results ***\n");
    printf("%s\n", a);
    printf("%s\n", b);
    printf("***************\n");

    if (compare(a, b) == 1) {
        printf("Both strings are the same.");
    } else {
        printf("Both strings are not the same.");
    }

    return 0;
}

void change(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
}

int compare(char a[], char b[]) {
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0') {
        char x = tolower(a[i]);
        char y = tolower(b[i]);

        if (x != y) {
            return 0;
        }

        i++;
    }

    if (a[i] == '\0' && b[i] == '\0') {
        return 1;
    }

    return 0;
}