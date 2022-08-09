#include <stdio.h>
int main() {    
    //Variable 
    int num1, num2, sum;

    // request value from user
    printf("Enter number integers #1: ");
    scanf("%d", &num1);
    printf("Enter number integers #2: ");
	scanf("%d", &num2);

    //add the two numbers together
    sum = num1 + num2;

    //Display sum
    printf("Number1 + Number2 = %d\n", sum);
    return 0;
}