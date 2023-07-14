#include <stdio.h>

/**
 * Main -
 *
 * Always return 0 (Success)
 *
 */
int main(void)
{
	char alp;

	for (alp = '0'; alp <= '9'; alp++)
	putchar(alp);

	for (alp = 'a'; alp < 'g'; alp++)
	putchar(alp);

	putchar('\n');

	return (0);
}
