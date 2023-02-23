#include <stdio.h>
/**
  * main - sum even fibonacci numbers under 4 million.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, i, j, o, sum;

	i = sum = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		o = i + j;
		i = j;
		j = o;
		if (o % 2 == 0 && o < 4000000)
		{
			sum += o;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
