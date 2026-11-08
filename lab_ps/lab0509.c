#include <stdio.h>

int main(void) {
    int age, height, weight;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    int sumAge = 0, sumHeight = 0, sumWeight = 0;
    for (int i = 0; i < 50; i++) {
        scanf("%d %d %d", &age, &height, &weight);
        if (age >= 20 && height >= 160) {
            count1++;
        }
        if (age < 20 && (height <= 180 || weight >= 60)) {
            count2++;
        }
        if (age >= 30 && weight >= 40 && weight <= 80) {
            count3++;
        }
        if (age < 40 && (weight < 85 || height <= 200)) {
            count4++;
        }
        sumAge += age;
        sumHeight += height;
        sumWeight += weight;
    }
    int avgAge = sumAge / 50;
    float avgHeight = (float)sumHeight / 50;
    float avgWeight = (float)sumWeight / 50;
    printf("Age >= 20 and Height >= 160: %d\n", count1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", count2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", count3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", count4);
    printf("Average Age: %d\n", avgAge);
    printf("Average Height: %.2f\n", avgHeight);
    printf("Average Weight: %.2f\n", avgWeight);
    return 0;
}