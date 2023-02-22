#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Program that prints _putchar
 * Return: Always 0
 */

int main(void)
{
	char x[] = "_putchar";
	int i;
	
	for (i = 0; x[i]; i++)
	_putchar(x[i]);

	_putchar('\n');

	return 0;
}

