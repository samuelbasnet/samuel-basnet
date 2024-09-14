#include<stdio.h>
int main(){
    float radius, height, area_of_circle, volume_of_cylinder;
    const float PI=3.14159;
    printf("Enter the value of radius: ");
    scanf("%f",&radius);

    printf("Enter the value of height: ");
    scanf("%f",&height);

    area_of_circle=PI*radius*radius;
    printf("The area of circle is %.2f",area_of_circle);

    volume_of_cylinder=PI*radius*radius*height;
    printf("The volume of cylinder is %.2f",volume_of_cylinder);
    
    return 0;
}