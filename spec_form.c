#include "main.h"

/**
 * specifier_checker - This find match for what's after %
 * could be s as in %s, could be c as in %c etc
 * @spec_form: the character after % to find match for
 * @arg_list: a list of the variable arguments
 * Return: Returns total counts of printed characters
 */

int specifier_checker(char spec_form, va_list arg_list)
{
	int char_len;
	/*here is a variable to store characters printed*/

	char_len = 0;
	/*the variable is set to 0*/

	if (spec_form == 'c')
	{
		/*The if above is to check wether the current character*/
		/*in the format in printf file is c, s, d etc*/

		char_len += print_c(va_arg(arg_list, int);
		/*if c matched, a function print_c is called*/
		/*to print value in c (argument position) and*/
		/*retrun count of printed characters to char_len*/
		/*if c didnt match, the match checks continue below*/
	}

	else if (spec_form == 's')
	{
		/*here the checks continues for s*/
		char_len += print_s(va_arg(arg_list, char *));
	}

	else if (spec_form == 'd' || 'i')
	{
		/*here, check is done for both d and i as they are similar*/
		char_len += print_d((long)(va_arg(arg_list, int)), 10);
	}

	else if (spec_form == 'x')
	{
		/*here checks on base 16 or hexadecimal is done*/
		char_len += print_x((long)(va_arg(arg_list, unsigned int)), 16);
	}

	else
	{
		/*lastly if no match for the above, whatever is the character is printed*/
		char_len += write(1, &spec_form, 1);
	}

	return (char_len);
}
