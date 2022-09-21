/**
 * Description: This program takes a first name as input and outputs a welcome message.
 * Author: Justin Goodman
 * Email: justin.goodman@sjsu.edu
 * Date: 9/4/22
**/

#include <stdio.h>

int main(void) {
   char userName[50];
   
   printf("Enter your first name:\n");
   scanf("%s", userName);
   
   printf("Hello %s, and welcome to CS online!", userName);
   return 0;
}