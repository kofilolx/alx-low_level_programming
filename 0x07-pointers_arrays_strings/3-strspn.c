/**
 * _strspn - return the length of prefix substring
 * @s: Character string to calculate substring from
 * @accept: accepted substring character to match
 * Return: length of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, check = 0, i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				check = 1;
			}
		}
		if (!check)
			return (count);
		check = 0;
		s++;
	}
	return (count);
}
