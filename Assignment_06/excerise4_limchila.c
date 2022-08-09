#include <stdio.h>
int main()
{
    int number;
    printf("Enter Number Under 20 : ");
    scanf("%d",&number);
    printf("%s \n",number < 20 ? "Thank you":"Too high");
    return 0;
}