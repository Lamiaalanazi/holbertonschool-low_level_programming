#include "main.h"

/**
 * cap_string - Capitalize words separated by the specified characters.
 * @str: String to modify.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;
	int j;
	int word_start = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (word_start && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';

		word_start = 0;
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				word_start = 1;
				break;
			}
		}
	}

	return (str);
}
