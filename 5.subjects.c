#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float total, average, percentage;

    printf("Enter marks for subject1:\n");
    scanf("%f",&subject1);

    printf("Enter marks for subject2:\n");
    scanf("%f",&subject2);

    printf("Enter marks for subject3:\n");
    scanf("%f",&subject3);

    printf("Enter marks for subject4:\n");
    scanf("%f",&subject4);
    
    printf("Enter marks for subject5:\n");
    scanf("%f",&subject5);

    total=subject1+subject2+subject3+subject4+subject5;

    average = total / 5;

    percentage = (total / 500) * 100;

    printf("Total Marks is %.2f\n", total);
    printf("Average Marks is %.2f\n", average);
    printf("Percentage is %.2f%%\n", percentage);

    return 0;
}
