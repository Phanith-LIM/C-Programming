#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float sum = 0;
    //run point
    for(i = 1; i <= 624 ; i++ )
    {
        sum = sum + 1/(sqrtf(i)+sqrtf(i+1));
    }
    //display result
    printf("\n1/(1+√2) + 1/(√2+√3) + 1/(√3+√4) +...+ 1/(√624+√625) = %g\n",sum);
    return 0;
}