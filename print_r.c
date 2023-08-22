#include "main.h"
/**
 * print_rev - reverse a string
 * @string: pointer to a char
 * Return: character count
 */
int print_rev(char *string)
{
int iterator = 0;
int length;
for (length = 0; string[length] != 0; length++)
{
for (iterator = length - 1; iterator >= 0; iterator--)
{
print_c(string[iterator]);
}
}
  return (length);
}
