#include "main.h"

/**
 * p_dec - Prints a decimal integer
 *
 * @d: Decimal integer to print
 *
 * Description: Prints a decimal integer.
 * Return: length of the integer.
 */

int p_dec(va_list d)
{
	int arr[10];
	int n, m, j, sum, len = 0;

	n = va_arg(d, int);
	m = 1000000000;
	arr[0] = n / m;

	for (j = 1; j < 10; j++)
	{
		m /= 10;
		arr[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		len++;
		for (j = 0; j < 10 ; j++)
			arr[j] *= -1;
	}

	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += arr[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + arr[j]);
			len++;
		}
	}

	return (len);
}

/**
* p_int - function to print a integer number
* @i: integer to print
*
* Description: Prints any integer.
*
* Return: the number of characters printed
* On error, -1 is returned, and errno is set appropriately.
*/

int p_int(va_list i)
{
	int arr[10];
	int n, m, j, sum, len = 0;

	n = va_arg(i, int);
	m = 1000000000;
	arr[0] = n / m;

	for (j = 1; j < 10; j++)
	{
		m /= 10;
		arr[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		len++;
		for (j = 0; j < 10 ; j++)
			arr[j] *= -1;
	}

	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += arr[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + arr[j]);
			len++;
		}
	}

	return (len);
}
/**
 * p_int_b - Convert an unsigned number to binary
 *
 * @b: number to convert
 *
 * Description: Change a positive number into
 * its binarry transform
 *
 * Return: binary number length
 */

int p_int_b(va_list b)
{
	unsigned int bi;
	int len = 0, i = 0;
	unsigned int arr[32];

	bi = va_arg(b, unsigned int);

	if (!bi)
	{
		_putchar('0');
		len++;
	}
	else
	{
		while (bi)
		{
			arr[i] = (bi % 2);
			bi /= 2;
			i++;
		}
		i--;
		while (i >= 0)
		{
			_putchar(arr[i] + '0');
			i--;
			len++;
		}
	}
	return (len);
}
