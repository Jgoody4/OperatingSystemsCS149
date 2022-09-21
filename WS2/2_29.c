/**
 * Description: This program uses math functions
 * Author: Justin Goodman
 * Email: justin.goodman@sjsu.edu
 * Date: 9/4/22
**/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
   double x;
   double y;
   double z;

   printf("Enter three values ex (5.0):\n");
   scanf("%lf %lf %lf\n", &x, &y, &z);
   
   //Calculate x to the power of z
   double result1 = pow(x, z);
   //Calculate x to the power of (y to the power of z)
   double result2 = pow(x, pow(y, 2));
   //Calculate absolute value of y
   double result3 = fabs(y);
   //Calculate square root of x*y to the power of z
   double result4 = sqrt(pow(x * y, z));
   
   //Print all the results
   printf("Outputs\n");
   printf("%0.2lf %0.2lf %0.2lf %0.2lf\n", result1, result2, result3, result4);
   return 0;
}