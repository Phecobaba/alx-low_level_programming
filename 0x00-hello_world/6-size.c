#include <stdio.h>
/**
 * main- prints out the paranthesized text
 * Description: This is a longer description.
 * Don't forget that a line should not exceed 80 characters.
 * But you're free to use several lines to properly describe your function
 * Return: The paranthesized characters
 */

int main() {
  printf("Size of a char : %dbytes\n", sizeof(char));
  printf("Size of an Int :  %2dbytes\n", sizeof(int));
  printf("Size of a long int : %2dbytes\n", sizeof(long int));
  printf("Size of Long Long int : %2dbytes\n", sizeof(long long int));
  printf("Size of a float : %2dbytes\n", sizeof(float));
  return 0;
}
