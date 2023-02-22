#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i;
char alpha;
for (i = 1; i <= 10; i++)
{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}
	_putchar('\n');
}
}
