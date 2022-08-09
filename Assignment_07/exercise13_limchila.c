#include <stdio.h>
int main()
{
    float number = 0;
    //check if the number is 5 or below
    while (number <= 5)
    {
        //ask for new number
        printf("Enter Number : ");
        scanf("%f",&number);
    }
    //display the last number
    printf("The last number you entered was a [%g]\n",number);
    return 0;
}