#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, i, j, o;

	i = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		o = i + j;
		i = j;
		j = o;
		printf("%lu", o);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}

