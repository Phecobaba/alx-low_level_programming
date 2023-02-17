#include <stdio.h>
/**
 * main- prints out the paranthesized text
 * Description: This is a longer description.
 * Don't forget that a line should not exceed 80 characters.
 * But you're free to use several lines to properly describe your function
 * Return: The paranthesized characters
 */
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    
    return 0;
}
