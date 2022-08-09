#include <stdio.h>
int main()
{
    float total = 0,number;
    
    //get value from user
    printf("Enter a number: ");
    scanf("%f",&number);
    total = number;

    //check if the total is 50 or below 
    while (total <= 50)
    {
        //ask and get more numbers from user
        printf("The total is %g\n",total);
        printf("Enter a number : ");
        scanf("%f",&number);

        //caculate the new total
        total = total + number;
    }
    printf("The total is %g\n",total);
    return 0;
}