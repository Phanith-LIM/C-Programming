#include <stdio.h>
int main()
{
    int n, i, sum;
    //run point
    for (i = 1; i < 10000; i++)
    {
        sum = 0;
        //find and sum factor number of i
        for( n = 1 ; n < i; n++) 
        {
            if (i%n == 0)
            sum = sum+n;
        }
    //print perfect number
    if (sum == i)
      printf("%d\n", i);
    }
    return 0;
}