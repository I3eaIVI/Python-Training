#include <stdio.h>

int main() {
    int total_seconds, days, hours, minutes, seconds;
    scanf("%d", &total_seconds);
    days = total_seconds / 86400;
    hours = (total_seconds % 86400) / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;
    printf("%d s = %d d %d h %d m %d s\n", total_seconds, days, hours, minutes, seconds);

    return 0;
}
