
#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter your weight (kg): ");
    scanf("%f", &weight);
    printf("Enter your height (cm): ");
    scanf("%f", &height);
    
    bmi = weight / (height * height);

    if (bmi < 18.5) {
        printf("You are Underweight");
    } else if (bmi <= 18.5 && bmi >= 24.9) {
        printf("Your bmi is %1.2f and is normal weight",bmi);
    }else if (bmi <= 25 && bmi >= 29.9) {
        printf("Your bmi is %1.2f and is over weight",bmi);
    }else if (bmi >= 30) {
        printf("Your bmi is %1.2f and is obese",bmi);
    }else{
        printf("Invalid Values Inserted");
    }

    return 0;
}
