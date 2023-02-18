#include <stdio.h>
/**
 * main- prints out the paranthesized text
 * Description: This is a longer description.
 * Don't forget that a line should not exceed 80 characters.
 * But you're free to use several lines to properly describe your function
 * Return: The paranthesized characters
 */

int main() {
  printf("Size of a char : %2d bytes\n", sizeof(char));
  printf("Size of an Int :  %2d bytes\n", sizeof(int));
  printf("Size of a long int : %2d bytes\n", sizeof(long int));
  printf("Size of Long Long int : %2d bytes\n", sizeof(long long int));
  printf("Size of a float : %2d bytes\n", sizeof(float));
  return 0;
}
