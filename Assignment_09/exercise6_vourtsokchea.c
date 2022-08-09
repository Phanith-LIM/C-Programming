#include <stdio.h>
int main() 
{
    int number[] = {2,3,4,5,7,3,5,6,10,35};

    //find size of index in array
    int size_array = sizeof(number)/sizeof(number[0]);

    //print orignial sort
    printf("Number Original : ");
    for (int i = 0; i < size_array; i++)
    {
       printf("%d ",number[i]);
    }
    printf("\n");

   //print reverse sort
    printf("Number Reverse : ");
    for (int i = size_array-1 ; i >= 0; i--)
    {
       printf("%d ",number[i]);
    }
    printf("\n");
    return 0;
}