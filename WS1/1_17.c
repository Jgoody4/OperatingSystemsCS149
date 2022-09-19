/**
 * This program takes user input and prints a right arrow
 * Justin Goodman
 * justin.goodman@sjsu.edu
 * 8/28/2022
**/

#include <stdio.h>

int main(void) {
    int baseInt;
    int headInt;
   
    printf("Enter 0 1");
    scanf("%i %i", &baseInt, &headInt);
    printf("\n");
    printf("    %i\n", headInt);
    printf("    %i%i\n", headInt, headInt);
    printf("%i%i%i%i%i%i%i\n", baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt);
    printf("%i%i%i%i%i%i%i%i\n", baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt, headInt);
    printf("%i%i%i%i%i%i%i\n", baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt);
    printf("    %i%i\n", headInt, headInt);
    printf("    %i\n", headInt);
    return 0;
}
