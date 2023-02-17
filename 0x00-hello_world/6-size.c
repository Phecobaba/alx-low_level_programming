#include <conio.h>
/**
 * main- prints out the paranthesized text
 * Description: This is a longer description.
 * Don't forget that a line should not exceed 80 characters.
 * But you're free to use several lines to properly describe your function
 * Return: The paranthesized characters
 */
main()
{
	clrscr();
	printf("    short int is %2d bytes \n", sizeof(short int));
	printf("          int is %2d bytes \n", sizeof(int));
	printf("        int * is %2d bytes \n", sizeof(int *));
	printf("     long int is %2d bytes \n", sizeof(long int));
	printf("   long int * is %2d bytes \n", sizeof(long int *));
	printf("   signed int is %2d bytes \n", sizeof(signed int));
	printf(" unsigned int is %2d bytes \n", sizeof(unsigned int));
	printf("\n");
	printf("        float is %2d bytes \n", sizeof(float));
	printf("      float * is %2d bytes \n", sizeof(float *));
	printf("       double is %2d bytes \n", sizeof(double));
	printf("     double * is %2d bytes \n", sizeof(double *));
	printf("  long double is %2d bytes \n", sizeof(long double));
	printf("\n");
	printf("  signed char is %2d bytes \n", sizeof(signed char));
	printf("         char is %2d bytes \n", sizeof(char));
	printf("       char * is %2d bytes \n", sizeof(char *));
	printf("unsigned char is %2d bytes \n", sizeof(unsigned char));
	getch();
}
