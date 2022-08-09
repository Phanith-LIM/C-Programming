#include <stdio.h>
int main() 
{
    float number[] = {10,8,7,5,34,0.1,6},switch_number;
    //find size of index in array
    int size_array = sizeof(number)/sizeof(number[0]);

    //Print Original sort of number
    printf("Original sort of number : ");
    for(int i = 0; i < size_array; i++){
        printf("%g  ",number[i]);
    }
    printf("\n");

    // Sort descending order
    for (int i = 0; i < size_array; i++)
    {
       for(int j = i + 1; j < size_array; j++)
       {
            if(number[i] < number[j])
            {
                switch_number = number[i];
                number[i] = number[j];
                number[j] = switch_number;
            }
       }
    }
    
    // Print Sort descending order
    printf("Sort descending order   : ");
    for(int i = 0; i < size_array; i++){
        printf("%g  ",number[i]);
    }
    printf("\n");
    return 0;
}