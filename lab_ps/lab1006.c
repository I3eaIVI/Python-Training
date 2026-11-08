#include <stdio.h>
#include <string.h>

struct student_info {
    char name[61];
    char surname[61];
    char sex[16];
    int age;
    char id[13];
    float gpa;
};

int main(void) {
    struct student_info st;

    scanf("%60s %60s %15s %d %12s %f",
          st.name, st.surname, st.sex, &st.age, st.id, &st.gpa);

    const char *title = (strcmp(st.sex, "Male") == 0) ? "Mr" : "Miss";

    printf("%s %c %s (%d) ID: %s GPA %.2f\n",
           title, st.name[0], st.surname, st.age, st.id, st.gpa);

    return 0;
}
