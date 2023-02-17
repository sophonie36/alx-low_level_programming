#include <stdio.h>

/**
 * main - Print the alphabet 
 * Retun Always 0 (success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++;)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
