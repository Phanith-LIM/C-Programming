#include <stdio.h>
int main()
{
    float num,num1,num2,add_num = 0;
    char ask_12;
    
    //get num1 and num2 from user
    printf("Enter num1 : ");
    scanf("%f",&num1);
    printf("Enter num2 : ");
    scanf("%f",&num2);
    num = num1 + num2;

    // ask if the user want to continue 
    do
    {
        printf("Do you want to continue add number? (y/n) : ");
        scanf(" %c",&ask_12);
        if ((ask_12 == 'n')||(ask_12 == 'N'))
        {
           break;
        }
        printf("Enter number you want to add : ");
        scanf("%f",&add_num);
        num = num + add_num;
    } while ((ask_12 == 'y')||(ask_12 == 'Y'));

    //print the final result
    printf("Sum of Number : %g\n",num);
    return 0;
}