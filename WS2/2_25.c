/**
 * Description: This program uses integers and divides user input by x three times
 * Author: Justin Goodman
 * Email: justin.goodman@sjsu.edu
 * Date: 9/4/22
**/

#include <stdio.h>

int main(void) {
   int userNum;
   int x; 
   printf("Enter two integers:\n");
   scanf("%i %i", &userNum, &x);
   printf("Outputs of integers divided\n");
   printf("%i %i %i\n", (userNum / x), (userNum / x / x), (userNum / x / x / x));
   return 0;
}