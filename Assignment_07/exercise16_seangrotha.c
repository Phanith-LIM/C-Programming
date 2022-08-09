#include <stdio.h>
int main()
{
    float number;
    while (1)
    {
        //ask input from user
        printf("Enter a number between 10 and 20 : ");
        scanf("%f",&number);
        
        //decision
        if (number < 10){
            printf("Too low\n");
        }else if (number > 20){
            printf("Too high\n");
        }else if ((10 <= number) && (number <= 20)){
            printf("Thank you\n");
            break;
        }
    }
    return 0;
}