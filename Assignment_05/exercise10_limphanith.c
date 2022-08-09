#include <stdio.h>
int main()
{
    //variable to store values from user
    float m,q,initial_tem,final_tem;

    //Input value to variable
    printf("Calculates the energy needed to heat water\n");
    printf("Weight of Water(kg) : ");
    scanf("%f",&m);
    printf("initialTemperature(c) : ");
    scanf("%f",&initial_tem);
    printf("finalTemperature(c) : ");
    scanf("%f",&final_tem);

    //Caclulate energy to heat water
    q = m*(final_tem - initial_tem)*4184;

    //Display result
    printf("Q = %f j\n",q);
    return 0;
}