#include <stdio.h>
#include <stdlib.h>
int main(){
    int numbers[] = {13, -15, 17, 22, 17, -21,};
    int i, j, sum, minSum, min1Pair, min2Pair;
    int size = sizeof(numbers)/sizeof(numbers[0]);

  //create the first sum of numbers
  min1Pair = numbers[0];
  min2Pair = numbers[1];
  minSum = min1Pair + min2Pair;

  //run loop for the first number of the sum
  for(i = 0; i < size; i++){

    //run loop for the second number of the sum
    for(j = i+1; j < size; j++){

      //create a new sum
      sum = numbers[i] + numbers[j];

      //check if the absolute value of the new sum is smaller than the old sum
      if (abs(sum) < abs(minSum)){

        //replace the old sum and place the value of the 2 numbers of the sum
        minSum = sum;
        min1Pair = numbers[i];
        min2Pair = numbers[j];
      }
    }
  }
  printf("[%d, %d]\n", min1Pair, min2Pair);
  return 0;
}