#include <stdio.h>
int main()
{
    int number[10],positive = 0,negative = 0,sum_positive = 0,sum_negative = 0;
    float average_of_positive,average_of_negative;
    
    // Ask user to enter 10 integer
    printf("Enter 10 Integer: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&number[i]);
        //case if number is positive
        if (number[i] > 0)
        {
            positive++;
            sum_positive = number[i] + sum_positive;
        }
        //case if number is negative
        else if (number[i] < 0)
        {
            negative++;
            sum_negative = number[i] + sum_negative;
        }
    }

    //Caculate average_of_positive and negative
    average_of_positive = (float)sum_positive/positive;
    average_of_negative =  (float)sum_negative/negative;

    // Display result of  average_of_positive and negative
    printf("average_of_positive = %g\n",average_of_positive);
    printf("average_of_negative = %g\n",average_of_negative);
    return 0;
}