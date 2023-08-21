#include "main.h"

/**
 * print_c - function to print char
 * @c: char to print
 * Return:characters printed
 */

int print_c(int c)
{
	return (write(1, &c, 1));
}

/**
 * print_s - function to print string
 * @s: string
 * Return: characters printed
 */

int print_s(char *s)
{
  int i = 0;

	if (s == NULL)
	  {
	    print_c("(null)");
	    return (i);
	  }
	
	while (s[i])
	  {
	    _putchar(s[i]);
	    i++;
	  }

	return (i);
}
