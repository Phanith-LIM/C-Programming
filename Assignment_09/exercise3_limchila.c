#include <stdio.h>
int main()
{
    float number[] = {2,1,4,5,6,3,7,8,6,10,33};
    //find size of index in array
    int size_array = sizeof(number) / sizeof(number[0]);

    //print element in number
    printf("Number : ");
    for (int i = 0; i < size_array; i++)
    {
        printf("%g ",number[i]);
    }
    printf("\n");
    
    //Sort element in ascending order
    for(int i = 0; i < size_array; i++)         
    {
        float switch_number;
        for(int j = i+1; j < size_array ;j++)
        {
            if(number[i] > number[j])
            {
                switch_number = number[i];
                number[i] = number[j];
                number[j] = switch_number;
            }
        }
    } 
    //Print the the result
    printf("The second smallest element is %g\n",number[1]);   
    printf("The second largest element is %g\n",number[size_array - 2]);    
    return 0;
}