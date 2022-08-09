#include <stdio.h>
int main(){
    int shape;
    float length, base, height, area;

    //instructions and get the shape type from the user
    printf("1) Square\n2) Triangle\n\nEnter a number: ");
    scanf("%d", &shape);

    //in case it's a sqaure
    if(shape == 1){

        //get input
        printf("Enter the length of the square: ");
        scanf("%f", &length);

        //calulate
        area = length * length;

        //output
        printf("The area of the sqaure is: %g", area);
    }

    //in case it's a triangle
    else if(shape == 2){

        //get input
        printf("Enter the base of the triangle: ");
        scanf("%f", &base);
        printf("Enter the height of the triangle: ");
        scanf("%f", &height);

        //calulate
        area = (base * height) / 2;

        //output
        printf("The area of the triangle is: %g", area);
    }

    //in case the user enters something else
    else
    
        //diplay error message
        printf("Wrong entry. Please enter only number 1 or 2");

    return 0;
}