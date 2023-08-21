#include "main.h"

/**
 * print_c - function to print char
 * @c: char to print
 * Return:characters printed
 */

int print_c(char c)
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
	int count = 0;

	if (!s)
		return (print_s("NULL");

	for (count = 0; s[count] != '\0'; count++)
		print_c(s[count]);

	return (count);
}
