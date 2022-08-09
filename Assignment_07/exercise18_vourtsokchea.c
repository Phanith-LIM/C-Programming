#include <stdio.h>
int main()
{
    int number = 0,negative = 0,positive = 0,sum = 0;
    float average;
    while (1)
    {
        //get unspecified number of integers from user
        printf("Enter the number of integer : ");
        scanf("%d",&number);

        //check number and store number of Positive and Negative
        if (number == 0)
        {
            break;
        }else if (number > 0)

        {
           positive++;
        }else if (number < 0)
        {
            negative++;
        }
        //use sum varibale to store number of loop
        sum = sum + number;
        //calculate average
        average = (float)sum/(positive + negative);
    }

    //display all result
    printf("\nNumber of Positive : %d\n",positive);
    printf("Number of Negative : %d\n",negative);
    printf("Total Number : %d\n",sum);
    printf("Average : %g\n",average);
    return 0;
}