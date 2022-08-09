#include <stdio.h>
#include <math.h>
int main(){
    float radius, length, area, volume;

    //get radius and length from the user
    printf("Enter the radius of the cylinder: ");
    scanf("%g", &radius);
    printf("Enter the length of the cylinder: ");
    scanf("%g", &length);

    //calculate area and volume
    area = radius * radius * M_PI;
    volume = area * length;

    //print the result to the terminal
    printf("%g\n", volume);
    
    return 0;
}