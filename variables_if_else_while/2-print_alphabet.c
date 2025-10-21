#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print alaphabet only with putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = {
		97,
		98,
		99,
		100,
		101,
		102,
		103,
		104,
		105,
		106,
		107,
		108,
		109,
		110,
		111,
		112,
		113,
		114,
		115,
		116,
		117,
		118,
		119,
		120,
		121,
		122,
	};

	int i;

	for (i = 0; i < 26; i++)
	{
		char c = alphabet[i];

		putchar(c);
	}

	/* New line */
	putchar(10);

	return (0);
}
