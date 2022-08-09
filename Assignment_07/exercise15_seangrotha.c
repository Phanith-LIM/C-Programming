#include <stdio.h>
int main()
{
    const int computer_num = 50;
    float guess_num;
    int i = 1;
    while (1)
    {
        //get input from user
        printf("Enter number you want to guess : ");
        scanf("%f",&guess_num);

        //decision
        if (guess_num == computer_num)
        {
            printf("Well done, you took [%d] attempts\n",i);
            break;
        }else if (guess_num < computer_num)
        {
            printf("Too low\n");
        }else if (guess_num > computer_num)
        {
            printf("Too high\n");
        }
        i++;
    }
    return 0;
}