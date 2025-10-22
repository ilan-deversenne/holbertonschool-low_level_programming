#include <stdio.h>

int main(void)
{
	int i;

	for (i = 48; i <= 57;)
	{
		putchar((char) i);
		i++;
	}

	/* New line */
	putchar(10);

	return (0);
}
