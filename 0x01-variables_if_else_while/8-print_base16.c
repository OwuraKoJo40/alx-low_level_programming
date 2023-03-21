#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */

int main(void)
{
	char c;

	int d;

	c = 'a';
	d = 0;
	if (d < 10)
	{
		putchar(d + '0');
		d++;
	}
	if (c <= 'f')
	{
		putchar(c);
		c++
	}
	putchar('\n');
	return (0);
}
