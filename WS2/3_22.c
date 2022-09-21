/**
 * Description: This program inputs three ints and ouputs the smallest value of the three
 * Author: Justin Goodman
 * Email: justin.goodman@sjsu.edu
 * Date: 9/4/22
**/

#include <stdio.h>

int main(void) {
   int a, b, c;
   
   printf("Enter three ints:\n");
   scanf("%i %i %i\n", &a, &b, &c);
   
   if((a < b) && (b < c))
   {
      printf("Smallest number is %i", a);
   }
   else if ((b < a) && (b < c))
   {
      printf("Smallest number is %i", b);
   }
   else
   {
      printf("Smallest number is %i", c);
   }
   return 0;
}