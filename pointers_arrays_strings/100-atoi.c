#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i;
	unsigned int temp = 0;
	int sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		
		if (s[i] == '-')
		{
			sign *= -1;
		}

		
		if (s[i] >= '0' && s[i] <= '9' && sign == -1)
		{
			temp = temp * 10 + (s[i] - '0');

			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
			{
				return (-temp);
			}
		}

		
		else if (s[i] >= '0' && s[i] <= '9' && sign == 1)
		{
			temp = temp * 10 + (s[i] - '0');

			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
			{
				return (temp);
			}
		}
	}
	return (0);
}
