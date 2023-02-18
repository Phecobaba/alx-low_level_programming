#include <stdio.h>

/**
 *main - prints the size of various types on the computer
 *Return: 0 is exited properly
 */

int main(void) {
  printf("Size of a char: %2d bytes \n", sizeof(char));
  printf("Size of an int: %2d bytes \n", sizeof(int));
  printf("Size of a long int: %2d bytes \n", sizeof(long int));
  printf("Size of a long long int: = %2d bytes \n", sizeof(long long int));
  printf("Size of a float: = %2d bytes \n", sizeof(float));
  return 0;
}
