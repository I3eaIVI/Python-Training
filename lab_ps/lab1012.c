#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void append(int v) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->val = v;
    node->next = NULL;
    node->prev = tail;
    if (tail == NULL) head = node;
    else tail->next = node;
    tail = node;
}

int pop_front(void) {
    struct Node *node = head;
    int v = node->val;
    head = node->next;
    if (head == NULL) tail = NULL;
    else head->prev = NULL;
    free(node);
    return v;
}

int pop_back(void) {
    struct Node *node = tail;
    int v = node->val;
    tail = node->prev;
    if (tail == NULL) head = NULL;
    else tail->next = NULL;
    free(node);
    return v;
}

void traverse(int n) {
    int remaining = n;
    int from_back = 1;   // เริ่มจากด้านท้าย
    int take = 1;        // รอบแรกหยิบ 1 ตัว หลังจากนั้นหยิบทีละ 2 ตัว
    int first = 1;

    while (remaining > 0) {
        for (int k = 0; k < take && remaining > 0; k++) {
            int v = from_back ? pop_back() : pop_front();
            if (!first) printf(" -> ");
            printf("%d", v);
            first = 0;
            remaining--;
        }
        from_back = !from_back;
        take = 2;
    }
    printf("\n");
}

int main(void) {
    int n, x;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        append(x);
    }

    traverse(n);
    return 0;
}