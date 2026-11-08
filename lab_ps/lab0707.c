#include <stdio.h>
#include <ctype.h>

void fm(char s[]) {
    int w = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') { w = 1; continue; }
        s[i] = w ? toupper(s[i]) : tolower(s[i]);
        w = 0;
    }
}

int cp(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0' && a[i] == b[i]) i++;
    return a[i] - b[i];
}

void swap(char a[], char b[]) {
    char t[61];
    int i = 0;
    while (a[i] != '\0') { t[i] = a[i]; i++; }
    t[i] = '\0';

    i = 0;
    while (b[i] != '\0') { a[i] = b[i]; i++; }
    a[i] = '\0';

    i = 0;
    while (t[i] != '\0') { b[i] = t[i]; i++; }
    b[i] = '\0';
}

void qs(char s[][61], int l, int r) {
    if (l >= r) return;
    int i = l, j = r;
    char pivot[61];
    int k = 0;
    while (s[(l + r) / 2][k] != '\0') { pivot[k] = s[(l + r) / 2][k]; k++; }
    pivot[k] = '\0';

    while (i <= j) {
        while (cp(s[i], pivot) < 0) i++;
        while (cp(s[j], pivot) > 0) j--;
        if (i <= j) {
            swap(s[i], s[j]);
            i++; j--;
        }
    }
    qs(s, l, j);
    qs(s, i, r);
}

int main(void) {
    int n;
    scanf("%d", &n);

    char s[n][61];

    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]", s[i]);
        fm(s[i]);
    }

    qs(s, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%s\n", s[i]);
    }

    return 0;
}