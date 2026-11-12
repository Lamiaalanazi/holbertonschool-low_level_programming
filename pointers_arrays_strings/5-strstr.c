#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds the first occurrence of a substring.
 * @haystack: String to search.
 * @needle: Substring to find.
 *
 * Return: Pointer to the first match, or NULL if no match is found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *text;
	char *pattern;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		text = haystack;
		pattern = needle;

		while (*pattern != '\0' && *text == *pattern)
		{
			text++;
			pattern++;
		}

		if (*pattern == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
