/**
 * Description: This program takes input and formats output. House real estate summary.
 * Author: Justin Goodman
 * Email: justin.goodman@sjsu.edu
 * Date: 9/4/22
**/

#include <stdio.h>

int main(void) {
   int currentPrice;
   int lastMonthsPrice;
   
   printf("Enter current price and last months price:\n");
   scanf("%d", &currentPrice);
   scanf("%d", &lastMonthsPrice);
   
   printf("This house is $%i. The change is $%i since last month.\nThe estimated monthly mortgage is $%lf.\n", currentPrice, (currentPrice - lastMonthsPrice), ((currentPrice * 0.051) / 12));
   return 0;
}