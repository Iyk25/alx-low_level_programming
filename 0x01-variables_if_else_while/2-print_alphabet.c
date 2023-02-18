#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
*main- Print alphabets in lower case using putchar
*Return: returns 0 if successful
*/

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}


