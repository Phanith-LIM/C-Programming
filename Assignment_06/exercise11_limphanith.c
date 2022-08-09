#include <stdio.h>
#include <math.h>
int main()
{
   //get value from user input
   float a,b,c,delta,x1,x2;
   printf("\nQuadratic Equations Solver : ax² + bx + c = 0\n");
   printf("Input a: ");
   scanf("%f",&a);
   printf("Input b: ");
   scanf("%f",&b);
   printf("Input c: ");
   scanf("%f",&c);
   //calculate delta
   delta = pow(b,2) - 4*a*c;
   printf("\nDelta = %g\n",delta);
   //decision
   if (delta == 0)      //case 1
   {
      x1 = x2 = (-b)/(2*a);
      printf("x = %g\n",x1);
   }else if (delta > 0)  //case 2
   {
      x1 = ((-b)+sqrt(delta))/(2*a);
      x2 = ((-b)-sqrt(delta))/(2*a);
      printf("x1 = %g\n",x1);
      printf("x2 = %g\n",x2);
   }else if (delta < 0)  //case 3
   {
      printf("The equation has no real roots\n");
   }  
  return 0;
}