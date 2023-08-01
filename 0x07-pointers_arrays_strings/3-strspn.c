/**
 * _strspn - return the length of prefix substring
 * @s: Character string to calculate substring from
 * @accept: accepted substring character to match
 * Return: length of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return c;
}
