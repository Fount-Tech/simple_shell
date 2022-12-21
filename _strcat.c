#include "main.h"
/**
 * _strcat - Combines two strings together
 * @dest: destination buffer
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int y = 0, z = 0, len = 0;

	while (src[len] != '\0')
		len++;

	while (dest[z] != '\0')
		z++;
	len += z;

	while (z <= len)
	{
		dest[z] = src[y];
		y++;
		z++;
	}
	return (dest);
}
