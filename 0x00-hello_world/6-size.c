#include <stdio.h>
/**
 * main- prints out the paranthesized text
 * Description: This is a longer description.
 * Don't forget that a line should not exceed 80 characters.
 * But you're free to use several lines to properly describe your function
 * Return: The paranthesized characters
 */

int main() {
  printf("Size of a char Data Types in C = %2d bytes \n", sizeof(char));
  printf("Size of an Int Data Types in C = %2d bytes \n", sizeof(int));
  printf("Size of a long int Data Types in C = %2d bytes \n", sizeof(long int));
  printf("Size of Long Long int Data Types in C = %2d bytes \n", sizeof(long double));
  printf("Size of a float Data Types in C = %2d bytes \n", sizeof(float));
  return 0;
}
