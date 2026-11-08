#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char *name;
    struct Node *next;
};

int main(void) {
    struct Node *head = NULL;
    struct Node *tail = NULL;
    int n = 0;
    int pos;

    char *buf = (char *)malloc(32);

    while (scanf("%20s", buf) == 1) {
        if (strcmp(buf, "Last") == 0) break;

        struct Node *node = (struct Node *)malloc(sizeof(struct Node));
        node->name = (char *)malloc(strlen(buf) + 1);
        strcpy(node->name, buf);
        node->next = NULL;

        if (head == NULL) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
        n++;
    }

    if (scanf("%d", &pos) != 1) {
        printf("Error\n");
        return 0;
    }

    // ตำแหน่งติดลบ นับจากท้าย แปลงเป็นตำแหน่งปกติ
    if (pos < 0) pos += n;

    if (pos < 0 || pos >= n) {
        printf("Error\n");
        return 0;
    }

    struct Node *cur = head;
    for (int i = 0; i < pos; i++) {
        cur = cur->next;
    }
    printf("%s\n", cur->name);

    return 0;
}