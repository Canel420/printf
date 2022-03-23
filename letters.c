#include "main.h"

/**
 * p_char - Prints a character
 *
 * @c: Character to print
 * Description: Prints a char.
 *
 * Return: 1.
 */

int p_char(va_list c)
{
	char cha = (char)va_arg(c, int);

	_putchar(cha);
	return (1);
}

/**
 * p_str - Prints a string
 *
 * @s: String to print
 * Description: Prints a string
 *
 * Return: i, the amount of integers printed.
 */

int p_str(va_list s)
{
	char *str = va_arg(s, char *);
	int i;

	if (str == NULL)
		str = "(null)";
	for (i = 0 ; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * p_str_r - Prints a string in reverse
 *
 * @r: String to be printed.
 *
 * Description: Prints a string in reverse.
 *
 * Return: Amount of characters in the string.
 */
int p_str_r(va_list r)
{
	int len = 0, len2 = 0;
	char *s;

	s = va_arg(r, char *);

	while (s[len] != '\0')
	{
		len++;
		len2++;
	}
	while (len)
		_putchar(s[--len]);
	return (len2);
}
