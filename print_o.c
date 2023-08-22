#include "main.h"

/**
 * print_b - converts a number to base 8
 * @n: number to convert
 * @base: base 8
 * Return: count
 */

int print_o(unsigned int n, unsigned int base)
{
	int div_count = 0;
	/*Here, this variable is declared to hold a portion*/
	/*of division that will occur if the figure is > the base*/
	
	char *converter;
	/*a variable to store lookup table for conversion to base 16*/

	converter = "01234567";
	/*here we have the lookup table stored in the variable*/

	if (n < base)
	{
		/*the if above checks if the number to*/
		/*convert is less than base to convert to*/
		/*but not negative number*/
		return (_putchar(converter[n]));
		/* number is less, we select its index from lookup table*/
		/*and return it*/
	}

	else
	{
		div_count = print_o((n / base), base);
		/*here we get calculate the integer side of the division like*/
		/*the integer side is stored in div-count*/
		/*the remainder side is stored in (n % base)*/

		return (div_count + print_o((n % base), base));
		/*we return the calculation here*/
	}
}
