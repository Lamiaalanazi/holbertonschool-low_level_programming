#include "main.h"

/**
 * leet - Encode a string using 1337 substitutions.
 * @str: String to modify.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}

	return (str);
}
