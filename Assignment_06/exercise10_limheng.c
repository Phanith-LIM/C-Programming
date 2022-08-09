#include <stdio.h>
int main(){
    float weight, height, BMI;

    //get input from user
    printf("Enter your weight(kg): ");
    scanf("%f", &weight);
    printf("Enter your height(m): ");
    scanf("%f", &height);

    //calulate BMI
    BMI = weight / (height * height);

    //check result and diplay the BMI measurement
    printf("\nYour weight based on BMI measurement is: ");
    if (BMI < 18.5)
    printf("Underweight");

    else if (BMI >= 18.5 && BMI <= 24.9)
    printf("Normal");

    else if (BMI >= 25 && BMI <= 29.9)
    printf("Overweight");

    else
    printf("Obese");

    return 0;
} 