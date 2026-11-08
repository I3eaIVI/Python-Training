#include <stdio.h>
#include <string.h>

struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

int main(void) {
    int n;
    char key[10];

    scanf("%d", &n);

    struct Record r[n > 0 ? n : 1];

    for (int i = 0; i < n; i++) {
        scanf("%9s %99s %ld %ld", r[i].id, r[i].name, &r[i].salary, &r[i].sales);
    }
    scanf("%9s", key);

    for (int i = 0; i < n; i++) {
        if (strcmp(r[i].id, key) == 0) {
            double commission = r[i].sales * 0.02;
            double total = r[i].salary + commission;

            printf("%s\n", r[i].id);
            printf("%s\n", r[i].name);
            printf("%ld\n", r[i].sales);
            printf("%.2f\n", commission);
            printf("%ld\n", r[i].salary);
            printf("%.2f\n", total);
            return 0;
        }
    }

    printf("ID not found !!!\n");
    return 0;
}