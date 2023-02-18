#include <stdio.h>
/**
 * main- prints out the paranthesized text
 * Description: This is a longer description.
 * Don't forget that a line should not exceed 80 characters.
 * But you're free to use several lines to properly describe your function
 * Return: The paranthesized characters
 */

int main() {
  printf("Size of Int Data Types in C = %2d bytes \n", sizeof(short int));
  printf("Size of Long Int Data Types in C = %2d bytes \n", sizeof(long int));
  printf("Size of Float Data Types in C = %2d bytes \n", sizeof(float));
  printf("Size of Long Long Data Types in C = %2d bytes \n", sizeof(long double));
  printf("Size of Char Data Types in C = %2d bytes \n", sizeof(char));
  return 0;
}
