#include <stdio.h>
int main()
{
    float total, i;

    //set the range of value and the increment
    for (i=1; i<=97; i+=2)
    {
        //add up the sum
        total = total + i/(i+2);
    }
   
    //print the result
    printf("The total sum is %g\n", total);
return 0;
}