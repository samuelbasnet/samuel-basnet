#include<stdio.h>
int main(){
float base, height, area;

printf("Enter base number: ");
scanf("%f",&base);

printf("Enter height number:");
scanf("%f",&height);
area=0.5*base*height;

printf("The area is %f",area);
return 0;
}