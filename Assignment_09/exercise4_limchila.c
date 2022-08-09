#include <stdio.h>
int main()
{
      float array_1[] = {3,5,4.3,8,9,0};
      float array_2[] = {1,5,4.3,7,9,0};
      //find size of index in array
      int size_array1 = sizeof(array_1) / sizeof(array_1[0]);

      //Display 1st array
      printf("(Array_1) : ");
      for (int i = 0; i < size_array1; i++)
      {     
         printf("%g ",array_1[i]);
      }
      printf("\n");

      //Display 2nd array
      printf("(Array_2) : ");
      for (int i = 0; i < size_array1; i++)
      {     
         printf("%g ",array_2[i]);
      }
      printf("\n");

      //Find and print intersection number
      printf("Intersection number of two arrays : ");
      for (int i = 0; i < size_array1; i++)
      {   
            if (array_1[i] == array_2[i])
            {
               printf("%g ",array_1[i]);
            }   
      }
      printf("\n");
      return 0;
}