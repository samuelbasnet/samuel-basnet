#include <stdio.h>
#include <math.h>  // Include math.h for the pow() function

int main() {
    float principal, rate, time, compound_interest;
    int n;  // Number of times interest is compounded per year

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    compound_interest = principal * pow((1 + rate / (n * 100)), n * time) - principal;

    printf("The compound interest is: %f", compound_interest);

    return 0;
}