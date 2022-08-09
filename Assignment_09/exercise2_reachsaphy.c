#include <stdio.h>
int main()
{
    int integer[] = {3,4,7,8,0,9,12,59,-1,4},min,max;
    //find size of index in array
    int size_array = sizeof(integer) / sizeof(integer[0]);

    //assign first index of array to min and max for compare
    min = max = integer[0];
    printf("Integer : ");
    for (int i = 0; i < size_array; i++)
    {
          printf("%d ",integer[i]);
          // min bigger than integer[i] it mean integer[i] is min_value
          if (min > integer[i])
          {
               min = integer[i];
          }
          // max smaller than integer[i] it mean integer[i] is max_value
          else if (max < integer[i])    
          {
               max = integer[i];
          } 
    }
    
    //print all result
    printf("\n");
    printf("Largest Number : %d\n",max);
    printf("Smallest Number : %d\n",min);
    return 0;
}