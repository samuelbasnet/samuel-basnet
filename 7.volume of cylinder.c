#include<stdio.h>
int main(){
    float radius, height, volume_of_cylinder;
    const float PI=3.14159;
    printf("Enter the value of radius: ");
    scanf("%f",&radius);

    printf("Enter the value of height: ");
    scanf("%f",&height);

    volume_of_cylinder=PI*radius*radius*height;
    printf("The volume of cylinder is %.2f",volume_of_cylinder);
    
    return 0;
}
