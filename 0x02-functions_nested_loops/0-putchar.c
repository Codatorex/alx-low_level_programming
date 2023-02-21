#include "main.h"
#define MAXSTRING 80

int main(void)
{	
	int i;
	char function[] = "_putchar";
	for (i = 0; i < MAXSTRING; i++)
		{
			if (function[i] == 0)
			{
			       	break;
			}
			else
			{
				_putchar(function[i]);
			}
		}
		printf("\n");
		return (0);
}    
