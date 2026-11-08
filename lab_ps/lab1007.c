#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct student_info {
    char name[61];
    char surname[61];
    char sex[16];
    int age;
    char id[13];
    float gpa;
};

// เทียบข้อความแบบไม่สนตัวพิมพ์เล็ก/ใหญ่
int cmp_nocase(const char *a, const char *b) {
    while (*a && *b) {
        int x = tolower((unsigned char)*a);
        int y = tolower((unsigned char)*b);
        if (x != y) return x - y;
        a++;
        b++;
    }
    return tolower((unsigned char)*a) - tolower((unsigned char)*b);
}

// คืนค่า > 0 ถ้า a ต้องไปอยู่หลัง b
int compare(const struct student_info *a, const struct student_info *b, int mode) {
    if (mode == 1) return cmp_nocase(a->name, b->name);
    if (mode == 2) return cmp_nocase(a->surname, b->surname);
    return strcmp(a->id, b->id);
}

int main(void) {
    struct student_info st[20];
    char opt[32];
    int mode = 1;

    for (int i = 0; i < 20; i++) {
        scanf("%60s %60s %15s %d %12s %f",
              st[i].name, st[i].surname, st[i].sex,
              &st[i].age, st[i].id, &st[i].gpa);
    }
    scanf("%31s", opt);

    if (cmp_nocase(opt, "name") == 0)         mode = 1;
    else if (cmp_nocase(opt, "surname") == 0) mode = 2;
    else if (cmp_nocase(opt, "id") == 0)      mode = 3;

    // insertion sort (stable: คนที่เท่ากันจะอยู่ลำดับเดิมตามที่ป้อน)
    for (int i = 1; i < 20; i++) {
        struct student_info key = st[i];
        int j = i - 1;
        while (j >= 0 && compare(&st[j], &key, mode) > 0) {
            st[j + 1] = st[j];
            j--;
        }
        st[j + 1] = key;
    }

    for (int i = 0; i < 20; i++) {
        const char *title = (strcmp(st[i].sex, "Male") == 0) ? "Mr" : "Miss";
        printf("%s %c %s (%d) ID: %s GPA %.2f\n",
               title, st[i].name[0], st[i].surname,
               st[i].age, st[i].id, st[i].gpa);
    }

    return 0;
}