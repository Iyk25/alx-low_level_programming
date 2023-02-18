#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
*main-Prints alphabets aplhabets except q and e using putchar
*Return: returns 0 if successful
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
