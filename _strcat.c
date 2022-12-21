#include "shell.h"
/**
 * _strcmp - comparer 2 chaine
 * @s1: Valeur 1
 * @s2: Valeur 2
 * Return: return 0 or -ve or +ve
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int n = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			n = (s1[i] - s2[i]);
			return (n);
		}
		i++;
	}
	return (0);
}
