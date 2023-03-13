#include "stdio.h"
/**
 * main - Prints _putchar, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		-putchar(c);
		i++;
	}
	putchar('\n');
	return (0);
}
