#include <studio.h>

/**
 * main - prnts the alphabets in lower case.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter < -'z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
