#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: the modified string
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (str[i] != '\0')
	{
		/* Check first character of the string */
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		/* Check if current character is a separator */
		j = 0;
		while (sep[j] != '\0')
		{
			if (str[i] == sep[j])
			{
				/* If found, check if the NEXT char is lowercase */
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
