#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
*main- Print alphabets in lower case and upper case using putchar
*Return: returns 0 if successful
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
