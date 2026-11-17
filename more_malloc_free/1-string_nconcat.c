#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates s1 and up to n bytes of s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes to copy from s2.
 *
 * Return: Pointer to the new string, or NULL if allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1;
	size_t len2;
	size_t i;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (len2 < n && s2[len2] != '\0')
		len2++;

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (i = 0; i < len2; i++)
		result[len1 + i] = s2[i];

	result[len1 + len2] = '\0';
	return (result);
}
