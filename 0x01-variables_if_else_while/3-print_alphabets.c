#include <stdio.h>
/**
 * main - main block
 * Discription: Print alphabet in lower and uppercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c;

	char d;

	c = "a";
	d = "A";
	while (c <= "z")
	{
		putchar(c);
		c++;
	}
	while (d <= "Z")
	{
		putchar(d);
		c++;
	}
	putchar('\n');
	return (0);
}
