#include "main.h"

/**
 *_puts - printa string to the stdout
 *@str: the string
 *Return: the lenghtof the string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
