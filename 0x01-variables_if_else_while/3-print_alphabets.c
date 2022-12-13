#include <stdio.h>
/**
 * main - main block
 * Discription: Print alphabet in lower and uppercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c = "a";

	while (c <= "z")
	{
		putchar(c);
		c++;
	}

	c = "A";

	while (c <= "Z")
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
