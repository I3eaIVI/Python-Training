#include <stdio.h>
#include <string.h>

struct Book {
    char id[10];
    char name[100];
    char author[100];
};

int main(void) {
    int n;
    char key[10];

    scanf("%d", &n);
    scanf("%9s", key);

    struct Book books[n > 0 ? n : 1];
    int found = 0;

    for (int i = 0; i < n; i++) {
        scanf("%9s %99s %99s", books[i].id, books[i].name, books[i].author);
    }

    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].id, key) == 0) {
            printf("%s %s %s\n", books[i].id, books[i].name, books[i].author);
            found = 1;
            break;
        }
    }

    if (!found) printf("Not Found\n");

    return 0;
}