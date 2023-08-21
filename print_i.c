#include "main.h"

/**
 * print_d - converts a number to base 10
 * @n: number to convert
 * @base: base 10
 * Return: the conversion in base 10
 */

int print_d(long int n, int base)
{
	int div_count = 0;
	/*Here, this variable is declared to hold a portion*/
	/*of division that will occur if the figure is > the base*/
	/*just like 11 > 10 as the base so 1 will be saved in div_count*/
	/*as 11 divided by 10 is 1 then we have remainder*/

	char *converter;
	/*a variable to store lookup table for conversion to base 16*/

	converter = "0123456789";
	/*here we have the lookup table stored in the variable*/

	if (n < base)
	{
		/*the if above checks if the number to*/
		/*convert is less than base to convert to*/
		/*but not negative number*/
		return (print_c(converter[n]));
		/* number is less, we select its index from lookup table*/
		/*and return it*/
	}

	else
	{
		/*if the value is > base, we firt do the below*/
		div_count = print_d((n / base), base);
		/*here we get calculate the integer side of the division like*/
		/* to convert 11 to base 10, we have just 1 of 10 in 11*/
		/*then we have 2 remaining after the division*/
		/*the integer side is stored in div-count*/
		/*the remainder side is stored in (n % base)*/

		return (div_count + print_d((n % base), base));
		/*we return the calculation here*/
	}
}
