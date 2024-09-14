#include<stdio.h>
int main(){
    float principle, time, rate, simple_interest;
    printf("Enter value of Principle: ");
    scanf("%f",&principle);

    printf("Enter time taken: ");
    scanf("%f",&time);

printf("Enter value of rate: ");
    scanf("%f",&rate);

simple_interest=(principle*time*rate)/100;

printf("The simple interest is %f",simple_interest);
return 0;
}
