#include <stdio.h>
#include "main.h"

/**
 *
 * _putchar - writes the characte c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is retured and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}